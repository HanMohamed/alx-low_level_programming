#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: elements
 * @size: bytes
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; ptr[i]; i++)
		ptr[i] = 0;

	return (ptr);
}
