cmake_minimum_required(VERSION 3.24)
project(0x10_variadic_functions C)

set(CMAKE_C_STANDARD 11)

add_executable(0x10_variadic_functions 0-main.c 0-sum_them_all.c variadic_functions.h)
add_executable(print 1-main.c 1-print_numbers.c)
add_executable(print_all 3-print_all.c 3-main.c)