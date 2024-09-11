cmake_minimum_required(VERSION 3.13)

# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        add_library(pico_driver STATIC  )

else()  # Is target RasPi Pico? 

        # To buid for RasPi SDK, this library should be interface
        # bacause it access the SDK. 
        # The target_link_libraries() is refering pico_stdlib 
        # which has NOT build in this directory. 
        # To allow it, we need CMake 3.13 or later.
        add_library(pico_driver INTERFACE)

endif()

add_subdirectory(codec)
add_subdirectory(i2c)
add_subdirectory(i2s)
add_subdirectory(sdk) # Wrapper class for RasPi Pico SDK. 