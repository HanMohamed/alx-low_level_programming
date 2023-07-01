cmake_minimum_required(VERSION 3.24)
project(0x0E_structures_typedef C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0E_structures_typedef 0-main.c dog.h 3-main.c)
add_executable(init 1-main.c 1-init_dog.c)
add_executable(print 2-print_dog.c 2-main.c)
add_executable(new 4-main.c 4-new_dog.c)
add_executable(free 5-main.c 5-free_dog.c)