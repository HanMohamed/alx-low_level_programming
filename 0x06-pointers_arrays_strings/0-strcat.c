#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: to concatenate to.
 * @src: concatenate from.
 *
 * A function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *p_dest = dest;
	char *p_src = src;

	while (*p_dest != '\0')
		p_dest++;
	while (*p_src != '\0')
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
	}
	*p_dest = '\0';
	return dest;
}
