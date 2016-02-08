cmake_minimum_required(VERSION 3.3)
project(cpp_travis_ci_test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(cpp_travis_ci_test ${SOURCE_FILES})