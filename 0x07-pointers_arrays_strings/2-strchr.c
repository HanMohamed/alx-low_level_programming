#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: atring
 * @c: character
 *
 * a function that locates a character in a string.
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *found = s;
	int n, count;

	for (n = 0; s[n]; n++)
		;

	for (count = 0; count < n; count++)
	{
		if (*found == c)
			return (found);
		found++;
	}
	*found = '\0';
	return (found);
}
