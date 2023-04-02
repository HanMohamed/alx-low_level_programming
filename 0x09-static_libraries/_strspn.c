#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: accepted bytes
 *
 * a function that gets the length of a prefix substring.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int sum = 0;
	char *p = accept;

	while (s != 0)
	{
		while (*p != 0)
		{
			if (*s == *p)
			{
				sum++;
				s++;
			}
			else 
				return (sum);
			p++;
		}
		p = accept;
	}

	return (sum);
}
