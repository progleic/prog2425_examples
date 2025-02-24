cmake_minimum_required(VERSION 3.15)
project(examples_02)

include("../Common.cmake")

add_executable(scope scope.cpp)
add_executable(sizeof_and_climits sizeof_and_climits.cpp)
add_executable(auto auto.cpp)
