#include "main.h"

/**
 * swap_int - swaps the values
 * @a: value of first integer.
 * @b: value of second integer.
 *
 * Description: A function that swaps the values of two integers.
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
