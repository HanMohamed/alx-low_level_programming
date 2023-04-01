#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 *
 * function finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = needle;

	while (*p != 0)
	{
		while (*haystack != 0)
		{
			if (*haystack == *p)
				return (haystack);
			haystack++;
		}
		p = needle;
		haystack++;
	}
	return (0);
}
