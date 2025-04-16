

#include "consts.h"

#include "../dependencies/CWebStudioOne.c"
#include "../dependencies/doTheWorldOne.c"
#include "globals.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif
#include <string.h>



CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    if(dtw_starts_with(request->route, CWEB_FIRMWARE_ROUTE)) {

        if(!allow_exit && !allow_read_dynamic_lib && !allow_update_firmware){
           return cweb_send_text("Firmware route not allowed. Use --allow_exit, --allow_read_dynamic_lib or --allow_update_firmware flag.", 403);
        }


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