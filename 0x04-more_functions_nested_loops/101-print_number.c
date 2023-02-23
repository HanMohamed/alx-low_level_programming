#include "main.h"

/**
 * print_number - print integer
 * You are not allowed to use long, arrays or pointers.
 *@n: integer to print it.
 */
void print_number(int n)
{
	int div = 1000000000;
	int a1, a2;

	if (n > 1000000000)
	{
		a1 = n / 1000000000;
		a2 = n % 1000000000;
		print_number(a1);
		print_number(a2);
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (div > 0 && n / div == 0)
		div /= 10;
	if (div == 0)
		_putchar('0' + n);
	while (n > 0)
	{
		_putchar('0' + (n / div));
		n %= div;
		div /= 10;
	}
}
