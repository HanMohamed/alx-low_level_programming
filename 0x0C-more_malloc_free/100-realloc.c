#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: is a pointer to the memory previously allocated with a call to malloc.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * The contents will be copied to the newly allocated space,
 *  in the range from the start of ptr to the minimum of the old and new sizes.
 * If new_size > old_size, the “added” memory should not be initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 *  for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL,
 *  then the call is equivalent to free(ptr), Return NULL.
 *
 * Return: A pointer to a new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc_ptr, *char_ptr;
	unsigned int i, size;

	if (ptr == NULL)
	{
		realloc_ptr = malloc(new_size);
		if (realloc_ptr == NULL)
			return (NULL);
		return (realloc_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (old_size < new_size)
		size = old_size;
	else
		size = new_size;

	realloc_ptr = malloc(new_size);
	if (realloc_ptr == NULL)
		return (NULL);

	char_ptr = (char *) ptr;
	i = 0;
	while (i < size)
	{
		realloc_ptr[i] = char_ptr[i];
		i++;
	}

	free(ptr);
	return (realloc_ptr);
}
