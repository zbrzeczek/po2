cmake_minimum_required(VERSION 3.26)
project(po)

set(CMAKE_CXX_STANDARD 17)

add_executable(po main.cpp
        Book.cpp
        Book.h
        Library.cpp
        Library.h)
