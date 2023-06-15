#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: min value
 * @max: max value
 *
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max.
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array_int, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array_int = malloc(sizeof(int) * size);
	if (array_int == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
		array_int[i++] = min++;

	return (array_int);
}
