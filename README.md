# CWeb Firmware

CWebFirmware is a CLI to be used in conjunction with CWebStudio, designed to make updates to the server generating 0 downtime, where instead of running an executable directly, you import a dynamic library, which allows you to install the .so/.dll on the server without disabling the server that is running.
## Release 

|Item                                                                                                                             | Description                                                           |
|---------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------|
|[CWebStudioFirmware.c](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmware.c)          | Amalgamation                                                          |
|[CWebStudioFirmware.out](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmware.out)      | Linux Executable                                                      |
|[CWebStudioFirmware.deb](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmware.deb)      | Debian Package                                                        |
|[CWebStudioFirmware.rpm](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmware.rpm)      | Red Hat Package Manager                                               |
|[CWebStudioFirmware.zip](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmware.zip)      | Zip Folder                                                            |
|[CWebStudioFirmwarei32.exe](https://github.com/OUIsolutions/CWebStudioFirmware/releases/download/0.1.1/CWebStudioFirmwarei32.exe)| Windows Executable                                                    |
## Overview

![User point of view](/assets/operation3.png)


## Docs 
|Item                                                           | Description                                                           |
|---------------------------------------------------------------|-----------------------------------------------------------------------|
|[building.md](docs/build_instructions.md)                      | Instructions for building the project.                               |
|[developing_dynamic_bins.md](docs/developing_dynamic_bins.md)  | Guide for developing dynamic library bins compatible with the server. |
|[cli_usage.md](docs/cli_usage.md)                              | Command line usage and configuration options.                         |
|[routes.md](docs/routes.md)                                    | Overview of available routes and their functionalities.               |
