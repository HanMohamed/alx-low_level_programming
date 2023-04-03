#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: to start from (included)
 * @max: to end (included)
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(max - min + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++, min++)
		array[i] = min;
	return (array);
}
