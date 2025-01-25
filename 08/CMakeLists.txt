cmake_minimum_required(VERSION 3.15)
project(examples_08)

include("../Common.cmake")

add_executable(string_examples string_examples.cpp)
add_executable(string_range_based_for_loops string_range_based_for_loops.cpp)
add_executable(heterogram heterogram.cpp)
add_executable(read_and_sort_values read_and_sort_values.cpp)
add_executable(ifstream_sum ifstream_sum.cpp)
add_executable(error_recovery error_recovery.cpp)

