cmake_minimum_required(VERSION 3.13)

# Redefine the project name for this executable. 
project(pico_sample)

# executable is created here. 
add_executable(${PROJECT_NAME}
        main.cpp
        )

# pull in common dependencies
        target_link_libraries(${PROJECT_NAME} pico_stdlib hardware_i2c)
# local dependencies
        target_link_libraries(${PROJECT_NAME}  driver)
   
# create map/bin/hex file etc.
   pico_add_extra_outputs(${PROJECT_NAME})

add_subdirectory(${PROJECT_SOURCE_DIR}/pico_driver)