cmake_minimum_required(VERSION 3.0.0)
enable_testing()

set(this SampleProjTest)
add_executable(${this} Test.cpp)
target_link_libraries(
    ${this} PUBLIC
    gtest_main
)

add_test(
    NAME ${this}
    COMMAND ${this}
)
