cmake_minimum_required(VERSION 3.13)




# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        target_sources(pico_driver PUBLIC 
                        adau1361.cpp
                        adau1361lower.cpp)
        target_include_directories(pico_driver PUBLIC .)

        # If the target is Windows or Unix, this is for testing 
        # by GTest. So it should be build as normal library. 

else()  # Is target RasPi Pico? 
        target_sources(pico_driver INTERFACE 
                        adau1361.cpp
                        adau1361lower.cpp)
        target_include_directories(pico_driver INTERFACE .)
endif()