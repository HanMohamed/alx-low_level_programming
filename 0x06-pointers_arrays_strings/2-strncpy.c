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
	char *p_dest = dest;
	char *p_src = src;
	int i;

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
