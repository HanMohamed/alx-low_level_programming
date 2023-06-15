#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * If malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *alloc_memory;

	alloc_memory = malloc(b);
	if (alloc_memory == NULL)
		exit(98);
	return (alloc_memory);
}
