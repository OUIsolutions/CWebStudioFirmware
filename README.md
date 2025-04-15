# CWeb Firmware

Welcome to the **CWeb Firmware Server**, a web server built in C using the CWebStudio framework to handle HTTP requests and interact with dynamic libraries. This project allows loading and executing functions from dynamic libraries at runtime, while providing specific routes for firmware management such as reading, writing, and shutting down the firmware, all secured with password authentication.

The server is highly configurable via command line arguments, enabling you to define ports, dynamic libraries, callbacks, and specific permissions for sensitive operations. Below, you'll find all the necessary information to understand, configure, and use this project.

## Overview

The **CWeb Firmware Server** is designed to:
- Load dynamic libraries (`.dll` on Windows or `.so` on Linux) and execute specific functions defined as callbacks.
- Secure firmware routes with password authentication (using SHA for validation).
- Provide granular control over permissions for reading libraries, updating firmware, and shutting down the server.
- Support custom configurations through command line arguments.

This server is ideal for scenarios where you need a lightweight and secure environment to manage firmware or other critical operations via HTTP.



## Docs 
|Item                                                           | Description                                                           |
|---------------------------------------------------------------|-----------------------------------------------------------------------|
|[cli_usage.md](docs/cli_usage.md)                              | Command line usage and configuration options.                         |
|[developing_dynamic_bins.md](docs/developing_dynamic_bins.md)  | Guide for developing dynamic library bins compatible with the server. |
|[routes.md](docs/routes.md)                                    | Overview of available routes and their functionalities.               |
