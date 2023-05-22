#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current_n;

	for (i = 63; i >= 0; i--)
	{
		current_n = n >> i;

		if (current_n & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
