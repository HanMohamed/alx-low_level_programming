#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a pointer to string
 *
 * a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line, to stdout.
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');

}
