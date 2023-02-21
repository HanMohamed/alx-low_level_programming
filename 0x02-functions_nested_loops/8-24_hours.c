#include "main.h"

/**
 * jack_bauer - print minutes
 *
 * Descrirtion: a function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int lHour;
	int rHour;
	int lMin;
	int rMin;

	for (lHour = 0; lHour <= 2; lHour++)
	{
		for (rHour = 0; rHour <= 3; rHour++)
		{
			for (lMin = 0; lMin <= 5; lMin++)
			{
				for (rMin = 0; rMin <= 9; rMin++)
				{
					_putchar('0' + lHour);
					_putchar('0' + rHour);
					_putchar(':');
					_putchar('0' + lMin);
					_putchar('0' + rMin);
					_putchar('\n');
				}
			}
		}
	}
}
