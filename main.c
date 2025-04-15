
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



    CwebServer server = newCwebSever(5000, main_sever);
    cweb.server.start(&server);
    return 0;
}