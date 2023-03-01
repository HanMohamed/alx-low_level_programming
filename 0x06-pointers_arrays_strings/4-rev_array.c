#include "main.h"

/**
 * reverse_array - reverses the content
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * a function that reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{

	int temp = a[0];
	int i = 0;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
