cmake_minimum_required(VERSION 3.13)




# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        target_sources(pico_driver PUBLIC 
                        i2cmaster.cpp)
        target_include_directories(pico_driver PUBLIC .)


else()  # Is target RasPi Pico? 
        target_sources(pico_driver INTERFACE 
                        i2cmaster.cpp)
        target_include_directories(pico_driver INTERFACE .)
        # This is tricky part. 
        # We need this pico_stdlib to pull in the include path of
        # pico SDK, when we build the driver library. 
endif()
