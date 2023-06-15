cmake_minimum_required(VERSION 3.24)
project(0x0C_more_malloc_free C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0C_more_malloc_free main.h 0-main.c 0-malloc_checked.c)
add_executable(string_nconcat 1-main.c 1-string_nconcat.c)
add_executable(calloc 2-main.c 2-calloc.c)
add_executable(array_range 3-main.c 3-array_range.c)
add_executable(realloc 100-main.c 100-realloc.c)
add_executable(mul 101-mul 101-mul.c)