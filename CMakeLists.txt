cmake_minimum_required(VERSION 2.8)
project(cpp_travis_ci_test)

#add_definitions(-std=c++11)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
#file(GLOB_RECURSE SOURCE_FILES "*.cpp")
#file(GLOB_RECURSE HEADER_FILES "*.h")

add_executable(factorial_run ${SOURCE_FILES})

include_directories(factorial)

add_subdirectory(factorial)
add_subdirectory(factorial_tests)

target_link_libraries(factorial_run factorial)