# To use FetchContent, we need CMake 3.14 or newer. 
# To use DOWNLOAD_EXTRACT_TIMESTAMP feature, we need CMake 3.24 or later. 
cmake_minimum_required(VERSION 3.24)

  # GoogleTest requires at least C++14
  # To use std::size() and __has_include, we need c++17
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)


# If the configuratopm target is Windows or Unix, this project
# will be build as a test program of the pico_driver. 

# If the configuration target is not above, this porject 
# will be build as a pico_driver library. 

if((${WIN32}) OR (${UNIX})) # Is Target Windows or Unix? 

  # Redefine project for testing.
  project(test_pico_driver)

  # Enable test to let the VS code find the test.
  include(CTest)
  enable_testing()

  include(FetchContent)
  FetchContent_Declare(
    googletest
    DOWNLOAD_EXTRACT_TIMESTAMP NEW
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    )
  # For Windows: Prevent overriding the parent project's compiler/linker settings
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)

  add_subdirectory(src)
  add_subdirectory(test)

else()  # Is target RasPi Pico? 
  add_subdirectory(src)

endif()
