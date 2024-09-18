# PICO DRIVER
A Collection of the Raspberry Pi [Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/)/[Pico2](https://www.raspberrypi.com/products/raspberry-pi-pico-2/) classes. Also, the [SDK API](https://www.raspberrypi.com/documentation/pico-sdk/hardware.html#group_sm_config_1gaed7a6e7dc4f1979c7c62e4773df8c79b) wrapper class is provided. 

## Details
This class collection ( or class library ) encapsule the certain data inside class. And it also allows you to use the depenency-injection inside your project. So, you can test your code with [Google Test](https://github.com/google/googletest) before testing on the target hardware. 

These classes are provided in this version. 

| class                           | Description |
|---------------------------------|----------------------------- |
| ::pico_driver::SdkWrapper       | Wrapper class of Pico SDK    |
| ::pico_driver::I2cMaster        | I2C Master controller        |
| ::pico_driver::DuplexSlaveI2s   | Polling based PIO I2S driver |
| ::pico_driver::Adau1361         | Audio CODEC driver           |


## How to obtain this project

The newest copy of this project is found in the [GitHub repository](https://github.com/suikan4github/pico_driver). 

## How to obtain the sample programs

The newest copy of the sample program project is found in the [GitHub repository](https://github.com/suikan4github/pico_driver-sample). 


## Installing tool
To build the samples or test, you need to install the build tools. 
The installation of Ubuntu is : 

```sh
apt-get -y update
apt-get -y install build-essential cmake ninja-build git doxygen
apt-get -y install gcc-arm-none-eabi libnewlib-arm-none-eabi
```

## Building test
The sample program and I2S drivers are tested by GoogleTest and fff. Follow the procedure to build the test. 

From the repository root ( where this README.md stays), run the following commands. 
```sh
mkdir build
cmake -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/gcc \
    -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/g++ \
    --no-warn-unused-cli \
    -S . \
    -B build \
    -G Ninja
cmake --build build --config Debug --target all --
```

## Building document
An API document are provided by HTML files. 
To obtain it, run doxygen at the project root ( where this README.md exists).

```sh
doxygen
```

## License.
This project is provided under [MIT License](LICENSE). 