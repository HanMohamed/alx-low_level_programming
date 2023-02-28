#include "main.h"

/**
 * _strlen - get length
 * @s: A pointer to char
 *
 *  a function that returns the length of a string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	char *c = s;

	while (*c != '\0')
	{
		len++;
		c++;
	}

	return (len);
}
