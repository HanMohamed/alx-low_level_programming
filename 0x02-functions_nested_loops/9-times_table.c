#include "main.h"

/**
 * times_table - print times table
 *
 * Descrirtion: A function that prints the
 * 9 times table, starting with 0.
 */
void times_table(void)
{
	int n = 9;
	int ntimes;
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ntimes = i * j;
			if (ntimes / 10 == 0)
				_putchar(' ');
			else
				_putchar('0' + ntimes / 10);
			_putchar('0' + ntimes % 10);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
