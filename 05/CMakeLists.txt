cmake_minimum_required(VERSION 3.15)
project(examples_05)

include("../Common.cmake")

add_executable(pointer_basics pointer_basics.cpp)
add_executable(pointers_and_arrays pointers_and_arrays.cpp)
add_executable(pointer_buffer_overflow pointer_buffer_overflow.cpp)
add_executable(arrays_of_pointers arrays_of_pointers.cpp)
add_executable(main_with_args main_with_args.cpp)
add_executable(pointers_and_structs pointers_and_structs.cpp)
add_executable(null_pointer null_pointer.cpp)
add_executable(null_pointer_access null_pointer_access.cpp)
add_executable(main_with_env_args main_with_env_args.cpp)
add_executable(pointer_arithmetic pointer_arithmetic.cpp)
add_executable(cstring_functions2 cstring_functions.cpp)
add_executable(reverse2 reverse.cpp)
