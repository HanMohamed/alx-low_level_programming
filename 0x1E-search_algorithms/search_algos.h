#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int b_search(int *array, size_t start, size_t end, int value);

int advanced_binary(int *array, size_t size, int value);

int advanced_binary_internal(int *array, size_t start, size_t end, int value);

#endif
