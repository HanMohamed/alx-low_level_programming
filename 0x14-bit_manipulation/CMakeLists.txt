cmake_minimum_required(VERSION 3.24)
project(0x14_bit_manipulation C)

set(CMAKE_C_STANDARD 11)

add_executable(0x14_bit_manipulation 0-binary_to_uint.c 0-main.c main.h)
add_executable(1-print_binary 1-print_binary.c 1-main.c _putchar.c)
add_executable(2-get_bit 2-get_bit.c 2-main.c)

