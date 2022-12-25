cmake_minimum_required(VERSION 3.0.0)
set(this SampleProj)
project(${this} VERSION 0.1.0)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# github submodules
# include(AddGitSubmodule.cmake)
# add_git_submodule(my_submod_dir)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        58d77fa8070e8cec2dc1ed015d66b454c8d78850 # v. 1.12.1
)
FetchContent_MakeAvailable(googletest)

include(CTest)
enable_testing()
add_subdirectory(test)

add_executable(${this} src/main.cpp)
