#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: size of matrix
 *
 * a function that prints the sum of the two diagonals
 * of a square matrix of integers
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum = 0;
	int i;

	for (i = 0; i < size; i++)
		sum += *(a + i * size + i);

	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += *(a + (i * size + (size - 1 - i)));
	printf("%d \n", sum);
}
