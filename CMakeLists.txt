cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME algorithms)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)
    
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/binarysearch/binary.cpp
    src/binarysearch/binary.h
    src/sorting/recursivesort/quicksort.cpp
    src/sorting/recursivesort/quicksort.h
    src/sorting/recursivesort/mergesort.cpp
    src/sorting/recursivesort/mergesort.h
    src/sorting/boublesort.cpp
    src/sorting/boublesort.h
)

