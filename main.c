
#include "dependencies/CWebStudioOne.c"
#include "dependencies/CArgvParseOne.c"

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

const char *HELP_FLAGS[]={
    "help",
    "h"
};
//====================================GLOBALS=========================================
const char *dynamic_lib;

//====================================NAMESPACE=========================================
CwebNamespace cweb;
CArgvParseNamespace argv_namespace;

//====================================MAIN SERVER=========================================

CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    return cweb_send_var_html((char*)private_cweb_500, 500);
}
//====================================MAIN=========================================
int main(int argc, char *argv[]){
    cweb = newCwebNamespace();
    argv_namespace = newCArgvParseNamespace();
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

    bool single_process = argv_namespace.is_flags_present(&args,SINGLE_PROCESS_FLAGS,FLAGS_SIZE);


    CwebServer server = newCwebSever(port_num, main_sever);
    server.single_process = single_process;
    cweb.server.start(&server);
    return 0;
}