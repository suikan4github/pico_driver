# Scripts to generate the SdkWrapper class

The scripts in this class will generate the following files :

| file                | Description                                      |
|---------------------|-------------------------------------------       |
| sdkwrapper.hpp      | ::rpp_driver::SdkWrapper class declaration.      | 
| sdkwrapper.cpp      | ::rpp_driver::SdkWrapper class implementation.   |
| sdkwrapper_mock.hpp | ::rpp_driver::SdkWrapper class mock declaration. |

# How to use the script

```sh
export PICO_SDK_PATH=/path/to/pico/sdk
generate_wrapper.sh
```

# How the scripts works

| file                  | Description                                    |
|---------------------  |-------------------------------------------     |
| generate_wrapper.sh   | Top level of script.                           | 
| generate_body.sh      | Generate body text for hpp and cpp files.      |
| api_dirs.txt          | List of the source directories of API.         |

# Skipped funcitions
| Functions                           | Reason |
|-----------                          | -------------------------------------- |
| stdio_getchar                       | Alias. Might be no need to user.       |
| stdio_putchar                       | Alias. Might be no need to user.       |
| stdio_puts                          | Alias. Might be no need to user.       |
| stdio_vprintf                       | Alias. Might be no need to user.       |
| stdio_printf                        | Alias. Might be no need to user.       |
| stdio_set_chars_available_callback  | Too difficult to handle automatically. |
