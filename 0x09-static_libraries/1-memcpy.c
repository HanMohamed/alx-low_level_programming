#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the copied memory
 * @src: to copy from
 * @n: number of bytes
 *
 * the function copies n bytes from memory area src to memory area dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
