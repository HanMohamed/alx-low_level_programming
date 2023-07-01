cmake_minimum_required(VERSION 3.24)
project(0x0E_structures_typedef C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0E_structures_typedef 0-main.c dog.h)
add_executable(init 1-main.c 1-init_dog.c)
