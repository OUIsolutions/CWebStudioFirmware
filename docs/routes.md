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

