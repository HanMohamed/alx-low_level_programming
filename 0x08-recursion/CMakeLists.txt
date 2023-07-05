cmake_minimum_required(VERSION 3.24)
project(0x08_recursion C)

set(CMAKE_C_STANDARD 11)

add_executable(0-puts_recursion 0-main.c main.h 0-puts_recursion.c _putchar.c 6-main.c)
add_executable(1-print_rev_recursion 1-main.c 1-print_rev_recursion.c _putchar.c main.h)
add_executable(2-strlen_recursion main.h 2-main.c 2-strlen_recursion.c)
add_executable(3-factorial 3-factorial.c 3-main.c)
add_executable(4-pow 4-main.c 4-pow_recursion.c)
add_executable(5-sqrt 5-sqrt_recursion.c 5-main.c)
add_executable(6-prime 6-main.c 6-is_prime_number.c)
add_executable(100-is_pali 100-is_palindrome.c 100-main.c)
add_executable(101-wilcmp 101-wildcmp.c 101-main.c)