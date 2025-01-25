cmake_minimum_required(VERSION 3.15)
project(examples_12)

include("../Common.cmake")


add_executable(test_persons persons.cpp test_persons.cpp)

add_executable(test_shapes shapes.cpp test_shapes.cpp coord2d.cpp)



 