#include "main.h"

/**
 * _strncat - concatenate two strings witn n most bytes
 * @dest: to concatenate to.
 * @src: concatenate from.
 * @n: number of most bytes.
 *
 * A function that concatenates two strings.
 * similar to the _strcat function, except that
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p_dest = dest;
	char *p_src = src;
	int i;

	while (*p_dest != '\0')
		p_dest++;
	for (i = 0; i < n && *p_src != '\0'; i++)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
	}
	if (i < n)
		*p_dest = '\0';
	return (dest);
}
