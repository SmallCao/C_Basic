cmake_minimum_required(VERSION 3.19)
project(C_Basic C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Basic main.c hello.c hello.h arraym.c arraym.h)