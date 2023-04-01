#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: address to memory
 * @b: a constant byte
 * @n: the number of the first bytes of memory
 *
 * function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
