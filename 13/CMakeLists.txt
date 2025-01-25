cmake_minimum_required(VERSION 3.15)
project(examples_13)

include("../Common.cmake")

# Create library leic
add_library(leic_13 fraction.cpp polynomial.cpp)

add_executable(fraction_example_13 fraction_example.cpp)
target_link_libraries(fraction_example_13 leic_13)

add_executable(polynomial_example_13 polynomial_example.cpp)
target_link_libraries(polynomial_example_13 leic_13)




