cmake_minimum_required(VERSION 3.24)
project(0x0B_malloc_free C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0B_malloc_free 0-main.c main.h _putchar.c 0-create_array.c )
add_executable(strdup 1-main.c 1-strdup.c)
add_executable(str_concat 2-main.c 2-str_concat.c)
add_executable(alloc_grid 3-main.c 3-alloc_grid.c)
add_executable(free_grid 4-main.c 3-alloc_grid.c 4-free_grid.c)
add_executable(argstostr 100-main.c 100-argstostr.c)
add_executable(strtow 101-main.c 101-strtow.c)