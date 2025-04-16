
#include "consts.h"

#include "../dependencies/CWebStudioOne.c"
#include "../dependencies/CArgvParseOne.c"
#include "../dependencies/doTheWorldOne.c"
#include "globals.h"
#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif
#include <string.h>
#include "main_server.c"

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




    allow_read_dynamic_lib = CArgvParse_is_flags_present(&args, ALLOW_READ_DYNAMIC_LIB_FLAGS, FLAGS_SIZE);
    allow_exit = CArgvParse_is_flags_present(&args, ALLOW_EXIT_FLAGS, FLAGS_SIZE);
    allow_update_firmware = CArgvParse_is_flags_present(&args, ALLOW_UPDATE_FIRMWARE_FLAGS, FLAGS_SIZE);

    //means password its required
    if (allow_exit || allow_update_firmware || allow_read_dynamic_lib){
        const char *password = CArgvParse_get_flag(&args,PASSWORD_FLAGS,FLAGS_SIZE,0);
        if(!password){
            printf("Password not provided\n");
            return 1;
        }
        char *hash = dtw_generate_sha_from_string(password);
        strcpy(password_sha, hash);
        free(hash);

    }

    CwebServer server = newCwebSever(port_num, main_sever);
    CwebServer_start(&server);
    return 0;
}
