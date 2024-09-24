# ::rpp_driver::SdkWrapper class
This class provides the wrapper class of the Raspberry Pi Pico SDK API. 

By using this class, a programmer can inject the dependency to the API to his/her program dynamically. That means, a programmer can do the unit test withe Google Test / Google Mock easily. 

Only selected APIs are implemented.

## Usage

The SdkWrapper class can instantiate with default contractor. 
```cpp
::rpp_driver::SdkWrapper sdk;
```

Without calling any other API, a programmer can path this variable to other class variable immediately.

For example, the following code explain how other class can use the SdkWrapper class variable. The I2cMaster class calls RasPi Pico SDK through the sdk variable. 

```cpp
  ::rpp_driver::SdkWrapper sdk;
  ::rpp_driver::I2cMaster i2c(sdk, i2c_inst, freq, scl_pin, sda_pin);
```

And in the case of test, this I2cMaster class is tested as like below : 

```cpp
  ::rpp_driver::MockSdkWrapper sdk;
  ::rpp_driver::I2cMaster i2c(sdk, i2c_inst, freq, scl_pin, sda_pin);
```

As you can see, the variable of the Mock class of the SdkWrapper is passed to i2c. This makes testing easier than calling RasPi Pico statically. 

## The member functions 
Each member functions of the SdkWrapper class have corresponding API of RasPi Pico SDK, respectively. For example, The ::rpp_driver::SdkWrapper::gpio_set_dir() member function is corresponding to the ::gpio_set_dir() API. 

So, it is implemented as following : 

```cpp
void ::rpp_driver::SdkWrapper::gpio_set_dir(uint gpio, bool out) {
  ::gpio_set_dir(gpio, out);
}
```

