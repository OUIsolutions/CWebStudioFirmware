# CWeb Firmware

CWebFirmware is a CLI to be used in conjunction with CWebStudio, designed to make updates to the server generating 0 downtime, where instead of running an executable directly, you import a dynamic library, which allows you to install the .so/.dll on the server without disabling the server that is running.

## Operation 
![User point of view](/assets/operation.png)


## Docs 
|Item                                                           | Description                                                           |
|---------------------------------------------------------------|-----------------------------------------------------------------------|
|[building.md](docs/build_instructions.md)                      | Instructions for building the project.                               |
|[developing_dynamic_bins.md](docs/developing_dynamic_bins.md)  | Guide for developing dynamic library bins compatible with the server. |
|[cli_usage.md](docs/cli_usage.md)                              | Command line usage and configuration options.                         |
|[routes.md](docs/routes.md)                                    | Overview of available routes and their functionalities.               |
