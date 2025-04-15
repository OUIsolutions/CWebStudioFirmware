#include "../dependencies/CWebStudioOne.c"
#include "../dependencies/CArgvParseOne.c"
#include "../dependencies/doTheWorldOne.c"

#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif
#include <string.h>
#include "consts.h"

//====================================GLOBALS=========================================
char dynamic_lib_path[2000] = {0};
const char *callback_name;
int global_argc;
char **global_argv;
char password_sha[100] = {0};
bool allow_read_dynamic_lib = false;
bool allow_exit = false;
bool allow_update_firmware = false;
const char *VERSION = "0.1.0";

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
        if (!allow_exit) {
            return cweb_send_text("Exiting the server is not allowed. Use --allow_exit flag.", 403);
        }
        cweb_kill_single_process_server();
        return cweb_send_text("Server shutting down", 200);
    }

    if(strcmp(request->route, READ_DYNAMIC_LIB) == 0) {
        if (!allow_read_dynamic_lib) {
            return cweb_send_text("Reading dynamic library is not allowed. Use --allow_read_dynamic_lib flag.", 403);
        }
        CwebHttpResponse *response =  cweb_send_file(dynamic_lib_path,CWEB_AUTO_SET_CONTENT, 200);

        DtwPath *path  = newDtwPath(dynamic_lib_path);
        char *formmated = (char*)malloc(100 + strlen(dynamic_lib_path));
        sprintf(formmated, "attachment; filename=%s", DtwPath_get_full_name(path));
        CwebHttpResponse_add_header(response, "Content-Disposition", formmated);
        free(formmated);
        DtwPath_free(path);
        return response;
    }

    if(strcmp(request->route, WRITE_DYNAMIC_LIB) == 0) {
        if (!allow_update_firmware) {
            return cweb_send_text("Updating firmware is not allowed. Use --allow_update_firmware flag.", 403);
        }
        unsigned char *data = CwebHttpRequest_read_content(request,MAX_BODY);
        if(!data){
            return cweb_send_text("Error reading content", 404);
        }
        dtw_write_any_content(dynamic_lib_path, data, request->content_length);
        return cweb_send_text("Dynamic library updated", 202);
    }

#ifdef _WIN32
    HMODULE handler = LoadLibrary(dynamic_lib);
    if(!handler){
        printf("Error loading dynamic library: %lu\n", GetLastError());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }
    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) =
    (CwebHttpResponse *(*)(CwebHttpRequest *,int ,char*[]))GetProcAddress(handler,callback_name);
#else
    void *handler = dlopen(dynamic_lib_path, RTLD_LAZY);
    if(!handler){
        printf("Error loading dynamic library: %s\n", dlerror());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }
    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) =
    (CwebHttpResponse *(*)(CwebHttpRequest *,int ,char*[]))dlsym(handler,callback_name);
#endif

    CwebHttpResponse *response = request_handler(request,global_argc,global_argv);
    
#ifdef _WIN32
    FreeLibrary(handler);
#else
    dlclose(handler);
#endif

    return response;
}
//====================================MAIN=========================================
int main(int argc, char *argv[]){

   
    global_argc = argc;
    global_argv = argv;
    CArgvParse args = newCArgvParse(argc,argv);

    if (CArgvParse_is_flags_present(&args, HELP_FLAGS, FLAGS_SIZE) || CArgvParse_is_one_of_args_present(&args, HELP_FLAGS, FLAGS_SIZE)) {
        printf("%s", HELP_MESSAGE);
        return 0;
    }

    if (CArgvParse_is_flags_present(&args, VERSION_FLAGS, FLAGS_SIZE)) {
        printf("Version: %s\n", VERSION);
        return 0;
    }

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
   
    const char *dynamic_lib_entrie = CArgvParse_get_flag(&args,DYNAMIC_LIV_FLAGS,FLAGS_SIZE,0);
    if(!dynamic_lib_entrie){
        printf("--dynamic_lib library not provided\n");
        return 1;
    }
    bool is_absolute = dtw_starts_with(dynamic_lib_entrie, "/") || dtw_starts_with(dynamic_lib_entrie, "\\");
    if(is_absolute){
       strcpy(dynamic_lib_path, dynamic_lib_entrie);
    }
    if(!is_absolute){
        char *current_dir = dtw_get_current_dir();
        char *joined = dtw_concat_path(current_dir, dynamic_lib_entrie);
        strcpy(dynamic_lib_path, joined);
        free(current_dir);
        free(joined);
    }


    callback_name = CArgvParse_get_flag(&args,CALLBACK_FLAGS,FLAGS_SIZE,0);

    if(!callback_name){
        printf("--callback not provided\n");
        return 1;
    }

    bool single_process = CArgvParse_is_flags_present(&args,SINGLE_PROCESS_FLAGS,FLAGS_SIZE);
    allow_read_dynamic_lib = CArgvParse_is_flags_present(&args, ALLOW_READ_DYNAMIC_LIB_FLAGS, FLAGS_SIZE);
    allow_exit = CArgvParse_is_flags_present(&args, ALLOW_EXIT_FLAGS, FLAGS_SIZE);
    allow_update_firmware = CArgvParse_is_flags_present(&args, ALLOW_UPDATE_FIRMWARE_FLAGS, FLAGS_SIZE);

    const char *password = CArgvParse_get_flag(&args,PASSWORD_FLAGS,FLAGS_SIZE,0);
    if(!password){
        printf("Password not provided\n");
        return 1;
    }
    char *hash = dtw_generate_sha_from_string(password);
    strcpy(password_sha, hash);
    free(hash);

    CwebServer server = newCwebSever(port_num, main_sever);
    #ifndef _WIN32
    server.single_process = single_process;
    #endif 
    server.use_static =false;
    CwebServer_start(&server);
    return 0;
}
