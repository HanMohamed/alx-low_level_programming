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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
