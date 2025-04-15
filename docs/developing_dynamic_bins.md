## Developing Dynamic Bins

To create a dynamic library bin compatible with this server, you must implement a callback function with the following signature:
```c
CwebHttpResponse *request_handler(CwebHttpRequest *request, int argc, char *argv[]);
```
- **Parameters**:
  - `request`: HTTP request object from the CWebStudio framework.
  - `argc` and `argv`: Command line arguments passed to the server, allowing the library to access global configurations.
- **Return**: A `CwebHttpResponse` object with the HTTP response to be sent to the client.

### Basic Example: Simple Hello World Handler using [CWebStudioOne.c](https://github.com/OUIsolutions/CWebStudio/releases/download/4.0.0/CWebStudioOne.c)
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
  gcc -shared  -fPIC -o mylib.so mylib.c
```
- **mingw**:
```bash
i686-w64-mingw32-gcc -fPIC -shared -o mylib.dll mylib.c -lws2_32
```


Then, pass its path and the callback function name via CLI when starting the server:
```bash
CWebFirmware --port 5000 --dynamic_lib mylib.so --callback request_handler --password mysupersecretpassword
```

This basic example shows how to create a simple dynamic library that returns a static response. You can expand on this by adding logic to handle different routes, methods, or request parameters as needed for your application.

