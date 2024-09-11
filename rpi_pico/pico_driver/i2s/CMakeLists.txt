cmake_minimum_required(VERSION 3.13)

# local library for hardeware driver

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 
        target_sources(pico_driver PUBLIC 
                        duplexslavei2s.cpp)
        target_include_directories(pico_driver PUBLIC .)


else()  # Is target RasPi Pico? 
        target_sources(pico_driver INTERFACE 
                        duplexslavei2s.cpp)
        target_include_directories(pico_driver INTERFACE .)

        # Generate 
        pico_generate_pio_header(pico_driver ${CMAKE_CURRENT_LIST_DIR}/duplex_slave_i2s.pio)
endif()
