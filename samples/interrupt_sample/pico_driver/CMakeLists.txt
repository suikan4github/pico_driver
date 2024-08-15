cmake_minimum_required(VERSION 3.13)

# local library for hardeware driver
add_library(driver INTERFACE)
        target_sources(driver INTERFACE outputpin.cpp pico_wrapper.cpp)
        target_include_directories(driver INTERFACE .)
        target_link_libraries(driver INTERFACE pico_stdlib)

# The target_link_libraries() is refering pico_stdlib 
# which has NOT build in this directory. 
# To allow it, we need CMake 3.13 or later. 