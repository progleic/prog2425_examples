cmake_minimum_required(VERSION 3.15)
project(examples_04)

include("../Common.cmake")

add_executable(point2d point2d.cpp)
add_executable(interval interval.cpp)
add_executable(struct_in_struct struct_in_struct.cpp)
add_executable(struct_alignment struct_alignment.cpp)
add_executable(reverse reverse.cpp)
add_executable(cstring_functions cstring_functions.cpp)
add_executable(structs_and_arrays structs_and_arrays.cpp)
add_executable(range_based_for_loops range_based_for_loops.cpp)
add_executable(buffer_overflow_1 buffer_overflow_1.cpp)
add_executable(buffer_overflow_2 buffer_overflow_2.cpp)

