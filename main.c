
#include "dependencies/CWebStudioOne.c"
#include "dependencies/CArgvParseOne.c"
CwebNamespace cweb;

CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    return cweb_send_var_html((char*)private_cweb_500, 500);
}

int main(int argc, char *argv[]){
    cweb = newCwebNamespace();


    CwebServer server = newCwebSever(5000, main_sever);
    cweb.server.start(&server);
    return 0;
}