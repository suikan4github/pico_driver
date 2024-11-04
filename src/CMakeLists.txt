cmake_minimum_required(VERSION 3.13)

# Create a rpp_driver library. 
# These declaration works for both UNIX/Win and bare metal. 

add_library(rpp_driver INTERFACE)
        target_include_directories(rpp_driver INTERFACE .)



add_subdirectory(codec)
add_subdirectory(i2c)
add_subdirectory(gpio)
add_subdirectory(i2s)
add_subdirectory(sdk) # Wrapper class for RasPi Pico SDK. 