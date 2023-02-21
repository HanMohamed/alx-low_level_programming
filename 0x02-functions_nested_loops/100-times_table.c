#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: maximum integer times table
 *
 * Description: a function that prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;
		int j;
		int ntimes;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ntimes = i * j;
				if (j != 0)
				{
					if (ntimes > 99)
					{
						_putchar('0' + (ntimes / 100));
						_putchar('0' + (ntimes / 10) % 10);
					}
					else if (ntimes > 9)
					{
						_putchar(' ');
						_putchar('0' + (ntimes / 10));
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				_putchar('0' + (ntimes % 10));
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
