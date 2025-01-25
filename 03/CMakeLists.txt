cmake_minimum_required(VERSION 3.15)
project(examples_03)

include("../Common.cmake")

add_executable(days_in_month days_in_month.cpp)
add_executable(factorials factorials.cpp)
add_executable(is_leap_year is_leap_year.cpp)
add_executable(is_prime is_prime.cpp)
add_executable(reference_variables reference_variables.cpp)
add_executable(get_min_max get_min_max.cpp)