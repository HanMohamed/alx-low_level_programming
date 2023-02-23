#include "main.h"

/**
 * print_square - print a square.
 * @n: is the number of times the character _ should be printed
 *
 * Description: a function that draws a square.
 * followed by a new line.
 * if n is 0 or less, the function should only print \n
 *
 */
void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			if (i != n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
