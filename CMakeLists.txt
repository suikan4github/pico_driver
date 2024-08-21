# To use FetchContent, we need CMake 3.14 or newer. 
cmake_minimum_required(VERSION 3.14)

# Redefine project for testing.
project(test_i2s)

# Enable test to let the VS code find the test.
include(CTest)
enable_testing()

# GoogleTest requires at least C++14
# To use std::size() and __has_include, we need c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(rpi_pico/samples/interrupt_sample/pico_driver)
add_subdirectory(test)

