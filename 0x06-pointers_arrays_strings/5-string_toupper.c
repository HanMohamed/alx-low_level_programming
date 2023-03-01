#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @str: a pointer to string
 *
 * a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * Return: A pointer to string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 122 && str[i] >= 97)
			str[i] -= 32;
	}
	str[i] = '\0';

	return (str);
}
