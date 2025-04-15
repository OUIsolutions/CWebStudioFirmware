
#include "dependencies/CWebStudioOne.c"
#include "dependencies/CArgvParseOne.c"
#include <dlfcn.h>

//====================================CONSTS=========================================
const int FLAGS_SIZE = 2;
const char *PORTS_FLAGS[]={
    "port",
    "p"
};

const char *DYNAMIC_LIV_FLAGS[]={
    "dynamic_lib",
    "d"
};

const char *SINGLE_PROCESS_FLAGS[]={
    "single_process",
    "s"
};

const char *CALLBACK_FLAGS[]={
    "callback",
    "c"
};

const char *HELP_FLAGS[]={
    "help",
    "h"
};
//====================================GLOBALS=========================================
const char *dynamic_lib;
const char *callback_name;
//====================================NAMESPACE=========================================
CwebNamespace cweb;
CArgvParseNamespace argv_namespace;
int global_argc;
char **global_argv;
//====================================MAIN SERVER=========================================

CwebHttpResponse *main_sever(CwebHttpRequest *request ){
    void *handler = dlopen(dynamic_lib, RTLD_LAZY);

    if(!handler){
        printf("Error loading dynamic library: %s\n", dlerror());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }

    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) = dlsym(handler,callback_name);

    CwebHttpResponse *response = request_handler(request,global_argc,global_argv);
    
    dlclose(handler);

    return response;
}
//====================================MAIN=========================================
int main(int argc, char *argv[]){

    cweb = newCwebNamespace();
    argv_namespace = newCArgvParseNamespace();
    global_argc = argc;
    global_argv = argv;
    CArgvParse args = argv_namespace.newCArgvParse(argc,argv);

    const char *port = argv_namespace.get_flag(&args,PORTS_FLAGS,FLAGS_SIZE,0);
    if(!port){
        printf("Port not provided\n");
        return 1;
    }
    int port_num = atoi(port);
    if(port_num <= 0){
        printf("--port not valid\n");
        return 1;
    }
   
    dynamic_lib = argv_namespace.get_flag(&args,DYNAMIC_LIV_FLAGS,FLAGS_SIZE,0);
    if(!dynamic_lib){
        printf("--dynamic_lib library not provided\n");
        return 1;
    }

    callback_name = argv_namespace.get_flag(&args,CALLBACK_FLAGS,FLAGS_SIZE,0);

    if(!callback_name){
        printf("--callback not provided\n");
        return 1;
    }

    bool single_process = argv_namespace.is_flags_present(&args,SINGLE_PROCESS_FLAGS,FLAGS_SIZE);


    CwebServer server = newCwebSever(port_num, main_sever);
    server.single_process = single_process;
    server.use_static =false;
    cweb.server.start(&server);
    return 0;
}