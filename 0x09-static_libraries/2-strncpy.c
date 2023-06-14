#include "main.h"

/**
 * _strncpy - copy two strings witn n most bytes
 * @dest: to copy to.
 * @src: to copy from.
 * @n: number of most bytes.
 *
 * A function that copy string, however
 * it will use at most n bytes from src
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
