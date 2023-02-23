#include "main.h"

/**
 * print_triangle - print triangle
 * @size: is the number of times the character _ should be printed
 *
 * Description: a function that prints a triangle in the terminal.
 * followed by a new line. using the character # to print the triangle.
 * if n is 0 or less, the function should only print \n
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			if (i != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
