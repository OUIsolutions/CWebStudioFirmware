# CWeb Firmware

CWebFirmware is a CLI to be used in conjunction with [CWebStudio](https://github.com/OUIsolutions/CWebStudio), designed to make updates to the server generating 0 downtime, where instead of running an executable directly, you import a dynamic library, which allows you to install the .so/.dll on the server without disabling the server that is running.
## Release 

|Item                                                                                                                             | Description                                                           |
|---------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------|
|[CWebStudioFirmware.c](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.2.1/CWebStudioFirmware.c)          | Amalgamation                                                          |
|[CWebStudioFirmware.zip](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.2.1/CWebStudioFirmware.zip)      | Zip Folder                                                            |

## Getting Started
- **Linux**:
```bash
 gcc CWebStudioFirmware.c  -o CWebStudioFirmware
```
- **mingw**:
```bash
  i686-w64-mingw32-gcc CWebStudioFirmware.c  -o CWebStudioFirmware.exe -lws2_32
```



## Overview

![User point of view](/assets/operation3.png)


## Docs 
|Item                                                           | Description                                                           |
|---------------------------------------------------------------|-----------------------------------------------------------------------|
|[building.md](docs/build_instructions.md)                      | Instructions for building the project.                                |
|[developing_dynamic_bins.md](docs/developing_dynamic_bins.md)  | Guide for developing dynamic library bins compatible with the server. |
|[cli_usage.md](docs/cli_usage.md)                              | Command line usage and configuration options.                         |
|[routes.md](docs/routes.md)                                    | Overview of available routes and their functionalities.               |
|[dependencies.md](/docs/dependencies.md)                       | Dependencies and licenses.                                            |