# To use FetchContent, we need CMake 3.14 or newer. 
cmake_minimum_required(VERSION 3.14)


# Add the executable for the testcase which is using googletest
add_executable(${PROJECT_NAME} test_picowrapper.cpp)

    # Add the library under test.
    target_link_libraries(${PROJECT_NAME}  
                            GTest::gtest_main
                            )

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

