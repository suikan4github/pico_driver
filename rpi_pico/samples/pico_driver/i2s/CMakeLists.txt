cmake_minimum_required(VERSION 3.13)

# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        add_library(pico_driver  
                        duplexslavei2s.cpp)
                target_include_directories(driver PUBLIC .)
        include(GoogleTest)
        # If the target is Windows or Unix, this is for testing 
        # by GTest. So it should be build as normal library. 

else()  # Is target RasPi Pico? 
        target_sources(pico_driver INTERFACE 
                        duplexslavei2s.cpp)
        target_include_directories(pico_driver INTERFACE .)

        # Generate 
        pico_generate_pio_header(pico_driver ${CMAKE_CURRENT_LIST_DIR}/duplex_slave_i2s.pio)
endif()
