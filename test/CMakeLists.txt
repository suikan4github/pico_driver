# To use FetchContent, we need CMake 3.14 or newer. 
cmake_minimum_required(VERSION 3.14)

# Redefine project for testing.
project(test_i2s)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# Add the executable for the testcase which is using googletest
add_executable(${PROJECT_NAME} test_pico_wrapper.cpp)

    # Add the library under test.
    target_link_libraries(${PROJECT_NAME}  
                            GTest::gtest_main
                            )
    target_include_directories(${PROJECT_NAME} PUBLIC
                            ${PROJECT_SOURCE_DIR}/../src/)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
