cmake_minimum_required(VERSION 3.24)
project(TriangleGen)

set(CMAKE_CXX_STANDARD 17)

add_executable(TriangleGen main.cpp triangle.h triangle.cpp fibo.h fibo.cpp)
