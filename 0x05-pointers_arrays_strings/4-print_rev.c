#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: a pointer to string
 *
 * a function that prints a string, in reverse
 * followed by a new line.
 *
 */
void print_rev(char *s)
{
	char *revs = s;
	int i;
	int len = 0;

	while (*revs != '\0')
	{
		len++;
		revs++;
	}

	for (i = 0; i < len ; i++)
	{
		revs--;
		_putchar(*revs);
	}
	_putchar('\n');
}
