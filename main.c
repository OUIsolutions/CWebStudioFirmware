#include "dependencies/CWebStudioOne.c"
#include "dependencies/CArgvParseOne.c"
#include "dependencies/doTheWorldOne.c"
#include <dlfcn.h>
#include <string.h>

//====================================CONSTS=========================================
const int MAX_BODY = 1000000000;

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

const char *PASSWORD_FLAGS[]={
    "password",
    "pass"
};

const char *ALLOW_READ_DYNAMIC_LIB_FLAGS[]={
    "allow_read_dynamic_lib",
    "r"
};

//====================================ROUTES=========================================
const char *CWEB_FIRMWARE_ROUTE = "/cweb_firmware";
const char *READ_DYNAMIC_LIB = "/cweb_firmware/read_dynamic_lib";
const char *WRITE_DYNAMIC_LIB = "/cweb_firmware/write_dynamic_lib";
const char *EXIT_FIRMWARE = "/cweb_firmware/exit";

const char *PASSWORD_ENTRIE ="password";

//====================================GLOBALS=========================================
const char *dynamic_lib;
const char *callback_name;
int global_argc;
char **global_argv;
char password_sha[100] = {0};
bool allow_read_dynamic_lib = false;

//====================================MAIN SERVER=========================================

CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    if(dtw_starts_with(request->route, CWEB_FIRMWARE_ROUTE)) {
        const char *provided_password = CwebHttpRequest_get_header(request, PASSWORD_ENTRIE);
        if (provided_password == NULL) {
            provided_password = CwebHttpRequest_get_param(request, PASSWORD_ENTRIE);
        }

        if (provided_password == NULL) {
            return cweb_send_text("Password required for firmware route", 401);
        }
        char *user_password_sha   = dtw_generate_sha_from_string(provided_password);
        if (strcmp(user_password_sha, password_sha) != 0) {
            free(user_password_sha);
            return cweb_send_text("Invalid password", 401);
        }
        free(user_password_sha);
    }

    if(strcmp(request->route, EXIT_FIRMWARE) == 0) {
        cweb_kill_single_process_server();
        return cweb_send_text("Server shutting down", 200);
    }

    if(strcmp(request->route, READ_DYNAMIC_LIB) == 0) {
        if (!allow_read_dynamic_lib) {
            return cweb_send_text("Reading dynamic library is not allowed. Use --allow_read_dynamic_lib flag.", 403);
        }
        CwebHttpResponse *response =  cweb_send_file(dynamic_lib,CWEB_AUTO_SET_CONTENT, 200);

        DtwPath *path  = newDtwPath(dynamic_lib);
        char *formmated = (char*)malloc(100 + strlen(dynamic_lib));
        sprintf(formmated, "attachment; filename=%s", DtwPath_get_full_name(path));
        CwebHttpResponse_add_header(response, "Content-Disposition", formmated);
        free(formmated);
        DtwPath_free(path);
        return response;
    }

    if(strcmp(request->route, WRITE_DYNAMIC_LIB) == 0) {
        unsigned char *data = CwebHttpRequest_read_content(request,MAX_BODY);
        if(!data){
            return cweb_send_text("Error reading content", 404);
        }
        dtw_write_any_content(dynamic_lib, data, request->content_length);
        return cweb_send_text("Dynamic library updated", 202);
    }

    void *handler = dlopen(dynamic_lib, RTLD_LAZY);

    if(!handler){
        printf("Error loading dynamic library: %s\n", dlerror());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }

    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) =
    (CwebHttpResponse *(*)(CwebHttpRequest *,int ,char*[]))dlsym(handler,callback_name);
    CwebHttpResponse *response = request_handler(request,global_argc,global_argv);
    
    dlclose(handler);

    return response;
}
//====================================MAIN=========================================
int main(int argc, char *argv[]){

   
    global_argc = argc;
    global_argv = argv;
    CArgvParse args = newCArgvParse(argc,argv);

    const char *port = CArgvParse_get_flag(&args,PORTS_FLAGS,FLAGS_SIZE,0);
    if(!port){
        printf("Port not provided\n");
        return 1;
    }
    int port_num = atoi(port);
    if(port_num <= 0){
        printf("--port not valid\n");
        return 1;
    }
   
    dynamic_lib = CArgvParse_get_flag(&args,DYNAMIC_LIV_FLAGS,FLAGS_SIZE,0);
    if(!dynamic_lib){
        printf("--dynamic_lib library not provided\n");
        return 1;
    }

    callback_name = CArgvParse_get_flag(&args,CALLBACK_FLAGS,FLAGS_SIZE,0);

    if(!callback_name){
        printf("--callback not provided\n");
        return 1;
    }

    bool single_process = CArgvParse_is_flags_present(&args,SINGLE_PROCESS_FLAGS,FLAGS_SIZE);
    allow_read_dynamic_lib = CArgvParse_is_flags_present(&args, ALLOW_READ_DYNAMIC_LIB_FLAGS, FLAGS_SIZE);

    const char *password = CArgvParse_get_flag(&args,PASSWORD_FLAGS,FLAGS_SIZE,0);
    if(!password){
        printf("Password not provided\n");
        return 1;
    }
    char *hash = dtw_generate_sha_from_string(password);
    strcpy(password_sha, hash);
    free(hash);

    CwebServer server = newCwebSever(port_num, main_sever);
    server.single_process = single_process;
    server.use_static =false;
    CwebServer_start(&server);
    return 0;
}