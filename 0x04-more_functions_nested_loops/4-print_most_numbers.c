#include "main.h"

/**
 * print_most_numbers - Prints numbers.
 *
 * Description: prints the numbers from 0 to 9,
 * Do not print 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);
	}
	_putchar('\n');
}
