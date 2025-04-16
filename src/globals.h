#ifndef GLOBALS_H
#define GLOBALS_H

char dynamic_lib_path[2000] = {0};
const char *callback_name;
int global_argc;
char **global_argv;
char password_sha[100] = {0};
bool allow_read_dynamic_lib = false;
bool allow_exit = false;
bool allow_update_firmware = false;
const char *VERSION = "0.1.0";


#endif