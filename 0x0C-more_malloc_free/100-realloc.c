#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  is a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *oldptr = ptr;
	unsigned int i;
	unsigned int n = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		p[i] = oldptr[i];

	free(ptr);
	return (p);
}
