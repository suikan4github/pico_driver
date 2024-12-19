# Raspberry Pi Pico driver class collection
A Collection of the Raspberry Pi [Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/)/[Pico2](https://www.raspberrypi.com/products/raspberry-pi-pico-2/) classes. Also, a [SDK API](https://www.raspberrypi.com/documentation/pico-sdk/hardware.html#group_sm_config_1gaed7a6e7dc4f1979c7c62e4773df8c79b) wrapper class is provided. 

An online [HTML documentation](https://suikan4github.github.io/rpp_driver/) is available for the details of the APIs.  

# Details
This class collection ( or class library ) encapsules the certain data structure of Pico SDK behind the classes. And it also allows programmers to use the dependency-injection in their projects. So, programmers can test their code with [Google Test](https://github.com/google/googletest) before testing on the target hardware. 

The following classes are provided in this version. 

| Class                           | Header file                | Description |
|---------------------------------|----                        |----------------------------- |
| ::rpp_driver::SdkWrapper        | sdk/sdkwrapper.hpp         | Wrapper class of Pico SDK    |
| ::rpp_driver::GpioBasic         | gpio/gpiobasic.hpp         | Basic GPIO controller        |
| ::rpp_driver::I2cMaster         | i2c/i2cmaster.hpp          | I2C Master controller        |
| ::rpp_driver::I2sSlaveDuplex    | i2s/i2sslaveduplex.hpp     | Polling based PIO I2S driver |
| ::rpp_driver::Adau1361          | codec/adau1361.hpp         | Audio CODEC driver           |
| ::rpp_driver::UmbAdau1361Lower  | codec/umbadau1361lower.hpp | CODEC lower driver dedicated to UMB-ADAU1361-A board |
## Supported headers
The SdkWrapper class supports the following headers. 
|Module                 | Done |
|------------           |--|
|hardware_adc           | x |
|hardware_base          | Skipped. Macro only. |
|hardware_boot_lock     | Skipped. Not published API. |
|hardware_clocks        | x |
|hardware_dcp           | Skipped. Assembly macro only. |
|hardware_divider       | x |
|hardware_dma           | x |
|hardware_exception     | x |
|hardware_flash         | x |
|hardware_gpio          | x |
|hardware_i2c           | x |
|hardware_interp        | x |
|hardware_irq           | x |
|hardware_pio           | x |
|hardware_pll           | x |
|hardware_powman        | x |
|hardware_pwm           | x |
|hardware_rcp           | x |
|hardware_resets        | x |
|hardware_rtc           | x |
|hardware_sha256        | x |
|hardware_spi           | x |
|hardware_sync          | x |
|pico_sync| x |
|hardware_ticks         | x |
|hardware_timer         | x |
|hardware_uart          | x |
|hardware_vreg          | x |
|hardware_watchdog      | x |
|hardware_xosc          | x |

The following functions are not supported. 
| Functions                           | Reason |
|-----------                          | -------------------------------------- |
| stdio_getchar                       | Alias. Might be no need to user.       |
| stdio_putchar                       | Alias. Might be no need to user.       |
| stdio_puts                          | Alias. Might be no need to user.       |
| stdio_vprintf                       | Alias. Might be no need to user.       |
| stdio_printf                        | Alias. Might be no need to user.       |
| stdio_set_chars_available_callback  | Too difficult to handle automatically. |
| sha256_get_write_addr               | Too difficult to handle automatically. | 
## How to obtain this project

The newest copy of this project is found in the [GitHub repository](https://github.com/suikan4github/rpp_driver). 

Run the following command to obtain this project from CLI:
```sh
git clone --recursive https://github.com/suikan4github/rpp_driver.git
```

## How to obtain the sample programs

The newest copy of the sample programs are found in the [GitHub repository](https://github.com/suikan4github/rpp_driver-sample). 

Run the following command to obtain the sample from CLI:
```sh
git clone --recursive https://github.com/suikan4github/rpp_driver-sample.git
```


# Tools and building
## How to install the tools
To build the sample program and/or test program, you need to install the build tools. 
The followings are the command to install these tools on Ubuntu.

```sh
apt-get -y update
apt-get -y install build-essential cmake ninja-build git 
apt-get -y install gcc-arm-none-eabi libnewlib-arm-none-eabi
apt-get -y install doxygen graphviz
```

## How to build the tests
The driver classes are tested by GoogleTest and fff. Follow the procedure to build the tests. 

From the repository root ( where this README.md stays), run the following commands. 
```sh
mkdir build
cmake -B build -S . -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ 
cmake --build build --config Debug --target all
```

## How to build the document
An API document is provided as HTML files. 
To obtain it, run doxygen at the project root ( where the README.md exists).

```sh
doxygen
```

The documentation will be generated under the docs/html/ subdirectory. 

# Integration to your RasPi Pico project
To use the rpp_driver, as a first step, you need to add following lines into your CMakeLists.txt. 

```
add_subdirectory(rpp_driver)
```

```
target_link_libraries(${PROJECT_NAME}  pico_stdlib 
                                        rpp_driver)
```

Note : Beside of rpp_driver, link the Raspberry Pi Pico SDK libraries as needed. 

By linking rpp_driver library, the include path for the source code are set automatically. 

# License
This project is provided under [MIT License](LICENSE). 

# Copyright
@author Seiichi Horie
