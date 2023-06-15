cmake_minimum_required(VERSION 3.24)
project(0x09_static_libraries C)

set(CMAKE_C_STANDARD 11)

add_executable(0x09_static_libraries main.h 100-atoi.c 1-strncat.c 0-isupper.c 0-memset.c 0-strcat.c 1-isdigit.c 1-memcpy.c 2-strchr.c 2-strlen.c 3-islower.c 3-puts.c 9-strcpy.c 6-abs.c 5-strstr.c 4-strpbrk.c 4-isalpha.c 3-strspn.c main.c)
