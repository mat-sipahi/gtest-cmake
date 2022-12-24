cmake_minimum_required(VERSION 3.0.0)
set(this SampleProj)
project(${this} VERSION 0.1.0)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        58d77fa8070e8cec2dc1ed015d66b454c8d78850 # v. 1.12.1
)
FetchContent_MakeAvailable(googletest)

include(CTest)
enable_testing()
# add_subdirectory(googletest)
add_subdirectory(test)

add_executable(${this} src/main.cpp)
