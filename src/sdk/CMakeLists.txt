cmake_minimum_required(VERSION 3.13)

# Common declaration for both UNIX/Win and bare metal.
target_include_directories(pico_driver INTERFACE .)

# Bare metal specific declaration. 
if(NOT (${WIN32}) AND NOT (${UNIX})) # Is target bare metal?   

        target_sources(pico_driver INTERFACE 
                        sdkwrapper.cpp
        )
        # This is tricky part. 
        # We need this pico_stdlib to pull in the include path of
        # pico SDK, when we build the driver library. 
        target_link_libraries(pico_driver INTERFACE pico_stdlib)

endif()

