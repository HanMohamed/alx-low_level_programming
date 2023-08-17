cmake_minimum_required(VERSION 3.24)
project(0x17_doubly_linked_lists)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(0-print_dlistint 0-print_dlistint.c "0-main.c ")
add_executable(1-dlistint_len 1-dlistint_len.c  1-main.c)
add_executable(2-add_dnodeint 2-main.c 2-add_dnodeint.c)
add_executable(3-add_dnodeint_end 3-main.c 3-add_dnodeint_end.c)
add_executable(4-free_dlistint 4-main.c 4-free_dlistint.c)
add_executable(5-get_dnodeint 5-main.c 5-get_dnodeint.c)
add_executable(6-sum_dlistint 6-main.c 6-sum_dlistint.c)
add_executable(7-insert_dnodeint 7-main.c 7-insert_dnodeint.c)
add_executable(8-delete_dnodeint 8-main.c 8-delete_dnodeint.c)
