#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *alloc_memory;

	alloc_memory = malloc(b);
	if (alloc_memory == NULL)
		exit(98);
	return (alloc_memory);
}
