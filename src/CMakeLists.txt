cmake_minimum_required(VERSION 3.13)

# Create a pico_driver library. 
# These declaration works for both UNIX/Win and bare metal. 

add_library(pico_driver INTERFACE)

add_subdirectory(codec)
add_subdirectory(i2c)
add_subdirectory(gpio)
add_subdirectory(i2s)
add_subdirectory(sdk) # Wrapper class for RasPi Pico SDK. 