cmake_minimum_required(VERSION 3.15)
project(examples_01)

include("../Common.cmake")

add_executable(hello hello.cpp)
add_executable(hello2 hello2.cpp)
add_executable(hello-not-indented hello-not-indented.cpp)
add_executable(factorial factorial.cpp)
