#include "main.h"

/**
 * print_number - print integer
 * @n: integer to print it.
 *
 * You are not allowed to use long, arrays or pointers.
 */
void print_number(int n)
{
	int div = 1000000000;
	unsigned int un;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	un = n;
	while (div > 0 && un / div == 0)
		div /= 10;
	if (div == 0)
		_putchar('0' + un);
	while (un > 0 || div > 0)
	{
		_putchar('0' + (un / div));
		un %= div;
		div /= 10;
	}
}
