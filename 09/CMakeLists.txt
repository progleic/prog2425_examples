cmake_minimum_required(VERSION 3.15)
project(examples_09)

include("../Common.cmake")

# Adding fraction example 2 to show potential problems when header files have implementations
add_executable(fraction_example fraction.cpp fraction_example.cpp fraction_example_2.cpp)
add_executable(polynomial_example fraction.cpp polynomial.cpp polynomial_example.cpp)


 