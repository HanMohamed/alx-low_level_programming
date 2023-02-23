#include "main.h"

/**
 * print_diagonal - print diagonal line.
 * @n: is the number of times the character _ should be printed
 *
 * Description: a function that draws a diagonal line in the terminal.
 * followed by a new line.
 * if n is 0 or less, the function should only print \n
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			if (!(i == n -1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
