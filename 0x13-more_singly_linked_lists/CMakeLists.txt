cmake_minimum_required(VERSION 3.24)
project(0x13_more_singly_linked_lists C)

set(CMAKE_C_STANDARD 11)

add_executable(0x13_more_singly_linked_lists lists.h 0-main.c 0-print_listint.c)
add_executable(1-listint_len 1-main.c 1-listint_len.c)
add_executable(add_nodeint 2-add_nodeint.c 2-main.c)
add_executable(3-add_nodeint_end 3-add_nodeint_end.c 3-main.c)
add_executable(4-free_listint 4-free_listint.c 4-main.c)
add_executable(5-free_listint2 5-free_listint2.c 5-main.c)
add_executable(6-pop_listint 6-pop_listint.c 6-main.c)
add_executable(7-get_nodeint 7-main.c 7-main.c)
add_executable(8-sum_listint 8-sum_listint.c 8-main.c)
add_executable(9-insert_nodeint 9-insert_nodeint.c 9-main.c)
add_executable(10-delete_nodeint 10-delete_nodeint.c 10-main.c)
add_executable(100-reverse_listint 100-reverse_listint.c 100-main.c)
add_executable(101-print_listint_safe 2-add_nodeint.c 101-print_listint_safe.c 101-main.c)
add_executable(102-free_listint_safe 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 102-main.c)
add_executable(103-find_loop 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-main.c 103-find_loop.c)