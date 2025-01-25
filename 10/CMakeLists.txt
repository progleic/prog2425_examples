cmake_minimum_required(VERSION 3.15)
project(examples_10)

include("../Common.cmake")

# Create library leic
add_library(leic fraction.cpp polynomial.cpp)

add_executable(fraction_example_2 fraction_example.cpp)
target_link_libraries(fraction_example_2 leic)

add_executable(polynomial_example_2 polynomial_example.cpp)
target_link_libraries(polynomial_example_2 leic)



 