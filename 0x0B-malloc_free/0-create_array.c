#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: of array
 * @c: specific char
 *
 * A function that creates an array of chars,
 * and initializes it with a specific char.
 * Returns NULL if size = 0
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array_char;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array_char = malloc(sizeof(char) * size);

	if (array_char == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_char[i] = c;

	return (array_char);
}
