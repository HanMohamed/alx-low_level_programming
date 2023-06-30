cmake_minimum_required(VERSION 3.24)
project(0x12_singly_linked_lists C)

set(CMAKE_C_STANDARD 11)

add_executable(0x12_singly_linked_lists 0-print_list.c lists.h 0-main.c)
add_executable(len 1-list_len.c 1-main.c 1-main.c)
add_executable(add_begin 2-main.c 2-add_node.c 0-print_list.c)

