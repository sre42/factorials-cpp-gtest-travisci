include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicFactorialTests basic_check.cpp factorial_check.cpp)

target_link_libraries(runBasicFactorialTests gtest gtest_main)
target_link_libraries(runBasicFactorialTests factorial)