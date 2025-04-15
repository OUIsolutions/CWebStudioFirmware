# CWeb Firmware Server

Welcome to the **CWeb Firmware Server**, a web server built in C using the CWebStudio framework to handle HTTP requests and interact with dynamic libraries. This project allows loading and executing functions from dynamic libraries at runtime, while providing specific routes for firmware management such as reading, writing, and shutting down the server, all secured with password authentication.

The server is highly configurable via command line arguments, enabling you to define ports, dynamic libraries, callbacks, and specific permissions for sensitive operations. Below, you'll find all the necessary information to understand, configure, and use this project.

## Overview

The **CWeb Firmware Server** is designed to:
- Load dynamic libraries (`.dll` on Windows or `.so` on Linux) and execute specific functions defined as callbacks.
- Secure firmware routes with password authentication (using SHA for validation).
- Provide granular control over permissions for reading libraries, updating firmware, and shutting down the server.
- Support custom configurations through command line arguments.

This server is ideal for scenarios where you need a lightweight and secure environment to manage firmware or other critical operations via HTTP.



## Developing Dynamic Libraries

To create a dynamic library compatible with this server, you must implement a callback function with the following signature:
```c
CwebHttpResponse *request_handler(CwebHttpRequest *request, int argc, char *argv[]);
```
- **Parameters**:
  - `request`: HTTP request object from the CWebStudio framework.
  - `argc` and `argv`: Command line arguments passed to the server, allowing the library to access global configurations.
- **Return**: A `CwebHttpResponse` object with the HTTP response to be sent to the client.

### Basic Example: Simple Hello World Handler
Below is a basic example of a dynamic library that responds with a "Hello, World!" message for any HTTP request. This is a minimal implementation to help you get started.

```c
#include "CWebStudioOne.c"

CwebHttpResponse *request_handler(CwebHttpRequest *request, int argc, char *argv[]) {
    CwebNamespace cweb = newCwebNamespace();
    return cweb.response.send_text("Hello, World!", 200);
}
```

### Compiling the Dynamic Library
Compile your library as `.dll` (Windows) or `.so` (Linux) using a command like:
- **Linux**:
  ```bash
  gcc -shared -o mylib.so mylib.c -fPIC
  ```
- **mingw**:
  ```bash
  i686-w64-mingw32-gcc -shared -o mylib.dll mylib.c
  ```


Then, pass its path and the callback function name via CLI when starting the server:
```bash
./cweb_firmware_server --port 5000 --dynamic_lib ./mylib.so --callback request_handler --password mysupersecretpassword
```

This basic example shows how to create a simple dynamic library that returns a static response. You can expand on this by adding logic to handle different routes, methods, or request parameters as needed for your application.


## Dependencies

The project uses the following libraries, included as dependencies:
- **CWebStudioOne**: Framework for creating web servers in C.
- **CArgvParseOne**: Library for parsing command line arguments.
- **doTheWorldOne**: Utility library for operations like SHA generation and file handling.


## CLI Usage
The server is configured exclusively via command line arguments. Below are the available flags, their descriptions, and usage examples.

### Mandatory Flags
- **`--port` or `-p`**: Defines the port on which the server will run.
  - Example: `--port 5000` or `-p 5000`
  - Note: Must be a valid number greater than 0.
- **`--dynamic_lib` or `-d`**: Path to the dynamic library (`.dll` on Windows or `.so` on Linux) to be loaded.
  - Example: `--dynamic_lib ./mylib.so`
- **`--callback` or `-c`**: Name of the callback function within the dynamic library that will be executed to process HTTP requests.
  - Example: `--callback request_handler`
- **`--password` or `--pass`**: Password used for authentication on firmware routes. The password is stored as a SHA hash.
  - Example: `--password mysupersecretpassword`

### Optional Flags
- **`--single_process` or `-s`**: Runs the server in single-process mode (applicable only on non-Windows systems).
  - Example: `--single_process`
- **`--allow_read_dynamic_lib` or `--allow_read`**: Allows the dynamic library to be read and downloaded via an HTTP route.
  - Example: `--allow_read_dynamic_lib`
- **`--allow_exit` or `--allow_exit`**: Allows the server to be shut down via an HTTP route.
  - Example: `--allow_exit`
- **`--allow_update_firmware` or `--allow_update`**: Allows the dynamic library to be updated via an HTTP route.
  - Example: `--allow_update_firmware`
- **`--help` or `-h`**: Displays help (not implemented in the current code but present as a flag).
  - Example: `--help`

### Full Command Example
```bash
./cweb_firmware_server --port 5000 --dynamic_lib ./mylib.so --callback request_handler --password mysupersecretpassword --allow_read_dynamic_lib --allow_exit --allow_update_firmware
```

### CLI Notes
- If any mandatory flag is missing or invalid (e.g., port less than or equal to 0), the server will display an error message and terminate.
- Boolean flags like `--single_process` do not require values; their presence enables the functionality.

## Server Routes

The server implements specific routes for firmware management, all protected by password authentication. The password can be provided via an HTTP header or query parameter with the key `password`. Below are the available routes:

### Firmware Routes (Prefix: `/cweb_firmware`)
All routes under `/cweb_firmware` require authentication. If the password is not provided or is invalid, the server will return a 401 error with the message "Password required for firmware route" or "Invalid password".

- **`GET /cweb_firmware/read_dynamic_lib`**
  - **Description**: Allows downloading the configured dynamic library.
  - **Required Permission**: The `--allow_read_dynamic_lib` flag must be present.
  - **Responses**:
    - **200 OK**: Returns the dynamic library file as an attachment (with `Content-Disposition` header).
    - **403 Forbidden**: Returns "Reading dynamic library is not allowed. Use --allow_read_dynamic_lib flag." if permission is missing.
  - **Request Example**:
    ```bash
    curl -H "password: mysupersecretpassword" http://localhost:5000/cweb_firmware/read_dynamic_lib -o mylib.so
    ```

- **`POST /cweb_firmware/write_dynamic_lib`**
  - **Description**: Allows updating the dynamic library by sending new binary data.
  - **Required Permission**: The `--allow_update_firmware` flag must be present.
  - **Responses**:
    - **202 Accepted**: Returns "Dynamic library updated" if the update is successful.
    - **403 Forbidden**: Returns "Updating firmware is not allowed. Use --allow_update_firmware flag." if permission is missing.
    - **404 Not Found**: Returns "Error reading content" if there is a failure in reading the sent data.
  - **Request Example**:
    ```bash
    curl -X POST -H "password: mysupersecretpassword" --data-binary @newlib.so http://localhost:5000/cweb_firmware/write_dynamic_lib
    ```

- **`GET /cweb_firmware/exit`**
  - **Description**: Shuts down the server.
  - **Required Permission**: The `--allow_exit` flag must be present.
  - **Responses**:
    - **200 OK**: Returns "Server shutting down" and terminates the server.
    - **403 Forbidden**: Returns "Exiting the server is not allowed. Use --allow_exit flag." if permission is missing.
  - **Request Example**:
    ```bash
    curl -H "password: mysupersecretpassword" http://localhost:5000/cweb_firmware/exit
    ```

### Other Routes
- **Any other route**: The server attempts to load the callback function from the specified dynamic library and execute it to process the request. If there is an error loading the library or function, it returns a 500 error with an HTML error page.
  - **Response**: Depends on the implementation of the callback in the dynamic library.
  - **Example**: If the dynamic library has a callback that responds to `/hello`, you can access it with:
    ```bash
    curl http://localhost:5000/hello
    ```

## Security

- **Authentication**: All firmware routes are protected by a password. The password provided via CLI is converted to a SHA hash and compared with the hash of the password provided in the request.
- **Permissions**: Sensitive operations (reading, writing, and shutting down) are controlled by specific flags, ensuring the administrator has full control over what is allowed.
- **Body Limit**: The server limits the request body size for write operations to 1GB (`MAX_BODY`), preventing memory abuse.


## Limitations

- The single-process mode (`--single_process`) is only applicable on non-Windows systems.
- Errors when loading dynamic libraries are displayed in the console, but there is no automatic recovery mechanism.
- The server does not support static files (`use_static` is set to `false`).

## Contribution

If you’d like to contribute to this project, feel free to open issues or pull requests. Suggestions for improving security, adding new features, or fixing bugs are always welcome.

## License

This project does not specify a license in the provided code. For usage or distribution, contact the author or define an appropriate license.

## Contact

For questions or support, reach out to the main developer (information not provided in the code). Alternatively, open an issue in the project repository.

---

There you go, hope this README covers everything! If you need tweaks or more details, just let me know. 😎
