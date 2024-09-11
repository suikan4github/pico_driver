cmake_minimum_required(VERSION 3.13)

# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        # do notihing here

else()  # Is target RasPi Pico? 

        target_sources(pico_driver INTERFACE 
                        sdkwrapper.cpp
        )
        target_include_directories(pico_driver INTERFACE .)
        # This is tricky part. 
        # We need this pico_stdlib to pull in the include path of
        # pico SDK, when we build the driver library. 
        target_link_libraries(pico_driver INTERFACE pico_stdlib)

endif()

