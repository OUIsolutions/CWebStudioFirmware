
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
CWebFirmware --port 5000 --dynamic_lib ./mylib.so --callback request_handler --password mysupersecretpassword --allow_read_dynamic_lib --allow_exit --allow_update_firmware
```



### CLI Notes
- If any mandatory flag is missing or invalid (e.g., port less than or equal to 0), the server will display an error message and terminate.
- Boolean flags like `--single_process` do not require values; their presence enables the functionality.
