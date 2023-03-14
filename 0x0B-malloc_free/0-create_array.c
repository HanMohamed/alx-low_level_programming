#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars with specific char
 * @size: size of array
 *
 * if size = 0 return null
 *
 * @c: specific char
 *
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0 || arr == NULL)
		return (NULL);

	arr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
