cmake_minimum_required(VERSION 3.13)




# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        add_library(driver  
#                       picowrapper.cpp
                        adau1361.cpp
                        adau1361lower.cpp
                        i2cmaster.cpp)
                target_include_directories(driver PUBLIC .)
                target_compile_definitions(driver PRIVATE GTEST_BUILD=1)
        include(GoogleTest)
        # If the target is Windows or Unix, this is for testing 
        # by GTest. So it should be build as normal library. 

else()  # Is target RasPi Pico? 
        add_library(driver INTERFACE)
                target_sources(driver INTERFACE 
                                picowrapper.cpp
                                adau1361.cpp
                                adau1361lower.cpp
                                i2cmaster.cpp)
                target_include_directories(driver INTERFACE .)
                target_link_libraries(driver INTERFACE pico_stdlib)
        # To buid for RasPi SDK, this library should be interface
        # bacause it access the SDK. 
        # The target_link_libraries() is refering pico_stdlib 
        # which has NOT build in this directory. 
        # To allow it, we need CMake 3.13 or later. 
endif()