#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size
 *
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 *
 * Return: a pointer to the type of your choice
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
