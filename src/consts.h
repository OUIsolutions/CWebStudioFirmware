#ifndef CONSTS_H
#define CONSTS_H

//====================================CONSTS=========================================
const int MAX_BODY = 1000000000;

const char *HELP_MESSAGE = "Usage: ./program [options]\n"
                           "Options:\n"
                           "  --port, -p <port>                Set the server port\n"
                           "  --dynamic_lib, -d <path>         Path to the dynamic library\n"
                           "  --callback, -c <name>            Callback function name in the dynamic library\n"
                           "  --starter_callback, -s <name>    Starter callback function name to initialize server\n"
                           "  --password, --pass <password>    Password for firmware routes\n"
                           "  --allow_read_dynamic_lib         Allow reading the dynamic library via firmware route\n"
                           "  --allow_exit                     Allow server exit via firmware route\n"
                           "  --allow_update_firmware          Allow updating the dynamic library via firmware route\n"
                           "  --version, -v                    Show the program version\n"
                           "  --help, -h                       Show this help message\n";

const int FLAGS_SIZE = 2;
const char *PORTS_FLAGS[]={
    "port",
    "p"
};

const char *DYNAMIC_LIV_FLAGS[]={
    "dynamic_lib",
    "d"
};

const char *CALLBACK_FLAGS[]={
    "callback",
    "c"
};

const char *STARTER_CALLBACK_FLAGS[]={
    "starter_callback",
    "s"
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
    "allow_read"
};

const char *ALLOW_EXIT_FLAGS[]={
    "allow_exit",
    "allow_exit"
};

const char *ALLOW_UPDATE_FIRMWARE_FLAGS[]={
    "allow_update_firmware",
    "allow_update"
};

const char *VERSION_FLAGS[]={
    "version",
    "v"
};

//====================================ROUTES=========================================
const char *CWEB_FIRMWARE_ROUTE = "/cweb_firmware";
const char *READ_DYNAMIC_LIB = "/cweb_firmware/read_dynamic_lib";
const char *WRITE_DYNAMIC_LIB = "/cweb_firmware/write_dynamic_lib";
const char *EXIT_FIRMWARE = "/cweb_firmware/exit";

const char *PASSWORD_ENTRIE ="password";
#endif