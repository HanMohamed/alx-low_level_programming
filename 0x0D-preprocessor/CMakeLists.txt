cmake_minimum_required(VERSION 3.24)
project(0x0D_preprocessor C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0D_preprocessor 0-main.c 0-object_like_macro.h)
add_executable(1-pi 1-pi.h 1-main.c)
add_executable(2-main 2-main.c)
add_executable(3-function_like_macro 3-function_like_macro.h 3-main.c)
