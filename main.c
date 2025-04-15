
#include "dependencies/CWebStudioOne.c"
#include "dependencies/CArgvParseOne.c"

//====================================FLAGS=========================================
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


//====================================NAMESPACE=========================================
CwebNamespace cweb;
CArgvParseNamespace argv_namespace;

//====================================MAIN=========================================

CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    return cweb_send_var_html((char*)private_cweb_500, 500);
}

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
        printf("Port not valid\n");
        return 1;
    }
   
    CwebServer server = newCwebSever(port_num, main_sever);
    cweb.server.start(&server);
    return 0;
}