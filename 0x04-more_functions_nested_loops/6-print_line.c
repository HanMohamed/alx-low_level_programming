#include "main.h"

/**
 * print_line - print astraight line.
 * @n: is the number of times the character _ should be printed
 *
 * Description: a function that draws a straight line in the terminal.
 * followed by a new line.
 * if n is 0 or less, the function should only print \n
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
