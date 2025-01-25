cmake_minimum_required(VERSION 3.15)
project(examples_14)

include("../Common.cmake")


add_executable(deque_example deque_example.cpp)
add_executable(erase_example erase_example.cpp)
add_executable(erase_and_insert erase_and_insert.cpp)
add_executable(map_example map_example.cpp)
add_executable(multimap_example multimap_example.cpp)
add_executable(multiset_example multiset_example.cpp)
add_executable(reverse_iterator_example reverse_iterator_example.cpp)
add_executable(set_example set_example.cpp)
add_executable(sorting_examples sorting_examples.cpp)
add_executable(sorting_examples2 sorting_examples2.cpp)
add_executable(vector_iterators vector_iterators.cpp)

