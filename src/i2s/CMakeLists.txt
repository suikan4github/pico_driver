cmake_minimum_required(VERSION 3.13)

# Common declaration for both UNIX/Win and bare metal.
target_sources(pico_driver INTERFACE 
                duplexslavei2s.cpp)
target_include_directories(pico_driver INTERFACE .)

# Bare metal specific declaration. 
if(NOT (${WIN32}) AND NOT(${UNIX})) # Is Target bare metal? 
        # Generate PIO program. 
        pico_generate_pio_header(pico_driver ${CMAKE_CURRENT_LIST_DIR}/duplex_slave_i2s.pio)
endif()
