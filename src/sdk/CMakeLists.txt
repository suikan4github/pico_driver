cmake_minimum_required(VERSION 3.13)

# Common declaration for both UNIX/Win and bare metal.
target_sources(rpp_driver INTERFACE 
                       pico_sdk_apistub.cpp
        )

# Bare metal specific declaration. 
if(NOT (${WIN32}) AND NOT (${UNIX})) # Is target bare metal?   
        # sdkwrapper.cpp is unable to build on Unix/Win. 
        # Then, test program include this cpp file to test. 
        # We need to build it only for bare metal target. 
        target_sources(rpp_driver INTERFACE 
                        sdkwrapper.cpp
        )
endif()

# We need big object option for MSVC. 
if (MSVC)
        target_compile_options(rpp_driver INTERFACE /bigobj)
endif()
