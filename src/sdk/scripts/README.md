# Scripts to generate the SdkWrapper class

The scripts in this directory will generate the following files :

| file                        | Description                                      |
|---------------------        |-------------------------------------------       |
| sdkwrapper.hpp              | ::rpp_driver::SdkWrapper class declaration.      | 
| sdkwrapper.cpp              | ::rpp_driver::SdkWrapper class implementation.   |
| mocksdkwrapper.hpp          | ::rpp_driver::SdkWrapper class mock declaration. |
| pico_api_alternate_defs.hpp | Alternate type definition for automated test     |
| pico_sdk_apistub.hpp        | Stub for automated test of the sdkwrapper.cpp    |
| pico_sdk_headers.h          | Include file for the sdkwrapper.cpp              |

For the actual application, only the sdkwrapper.hpp and sdkwrapper.cpp are needed explicitly. You may want to use the mocksdkwrapper.hpp to test your class which uses the sdkwrapper. 

# How to use the script

```sh
export PICO_SDK_PATH=/path/to/pico/sdk
./generate_wrapper.sh
```

# How the scripts work

| file                  | Description                                    |
|---------------------  |-------------------------------------------     |
| generate_wrapper.sh   | Top level of script.                           | 
| generate_body.sh      | Generate body text for hpp and cpp files.      |
| format_header.sh      | Extract the function prototype for generate_body.sh |
| api_dirs.txt          | List of the source directories of API.         |

# Skipped functions
| Functions                           | Reason |
|-----------                          | -------------------------------------- |
| stdio_getchar                       | Alias. Might be no need to user.       |
| stdio_putchar                       | Alias. Might be no need to user.       |
| stdio_puts                          | Alias. Might be no need to user.       |
| stdio_vprintf                       | Alias. Might be no need to user.       |
| stdio_printf                        | Alias. Might be no need to user.       |
| stdio_set_chars_available_callback  | Too difficult to handle automatically. |
| sha256_get_write_addr               | Too difficult to handle automatically. | 