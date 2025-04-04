cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
project(Calculator)

set(SOURCE_FILES
    Calculator.cpp
    test.cpp
)

add_executable(Functional_Calculator ${SOURCE_FILES})
