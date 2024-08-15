# duplex-i2s-pico
An experimental Duplex I2S implementation on PIO and its example applications. 

## Details
This is an experimental project for the Raspberry Pi Pico I2S implementation. This project targets : 
- Supports Duplex I2S in Slave mode. 
- Only 32bit data on I2S is supported. 
- Supports both RP2040 and RP2350.
- Unit test by [GoogleTest](https://google.github.io/googletest/) and [fff](https://github.com/meekrosoft/fff).
- Possible to build on Ubuntu Desktop or WSL. 

## How to obtain this project

The newest copy of this project is found in the [GitHub repository](https://github.com/suikan4github/duplex-i2s-pico). 


## Building sample
All the sample and I2S driver code are under rpi directory. 

See the [rpi/BUILD.md](rpi/BUILD.md)
## Installing tool
To build the samples or test, you need to install the build tools on Ubuntu : 

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
## License.
This project is provided under [MIT License](LICENSE). 