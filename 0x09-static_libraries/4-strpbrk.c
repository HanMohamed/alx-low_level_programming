#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: substring
 * @accept: string
 *
 * the function locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s != 0)
	{
		while (*p != 0)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		p = accept;
		s++;
	}
	return (0);
}

