cmake_minimum_required(VERSION 3.24)
project(0x10_variadic_functions C)

set(CMAKE_C_STANDARD 11)

add_executable(0x10_variadic_functions 0-main.c 0-sum_them_all.c variadic_functions.h)
