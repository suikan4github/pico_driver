cmake_minimum_required(VERSION 3.13)




# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        add_library(pico_driver  
                        i2cmaster.cpp)
                target_include_directories(driver PUBLIC .)
        include(GoogleTest)
        # If the target is Windows or Unix, this is for testing 
        # by GTest. So it should be build as normal library. 

else()  # Is target RasPi Pico? 
        target_sources(pico_driver INTERFACE 
                        i2cmaster.cpp)
        target_include_directories(pico_driver INTERFACE .)
        # This is tricky part. 
        # We need this pico_stdlib to pull in the include path of
        # pico SDK, when we build the driver library. 
endif()
