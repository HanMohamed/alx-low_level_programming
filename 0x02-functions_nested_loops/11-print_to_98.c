#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98
 * @n: integer to start print from.
 *
 * Description: A function that prints all
 * natural numbers from n to 98,
 * followed by a new line.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("%d", i);
	printf("\n");
}
