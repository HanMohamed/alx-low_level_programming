#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: a pointer to string
 *
 * a function should print the second half of the stringh
 * If the number of characters is odd.
 * n = (length_of_the_string - 1) / 2
 * followed by a new line.
 *
 */
void puts_half(char *str)
{
	char *s = str;
	int i = 0;
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	if (n % 2 != 0)
		n = (n - 1) / 2;
	else
		n = n / 2;

	while (*str != '\0')
	{
		if (i >= n)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');

}
