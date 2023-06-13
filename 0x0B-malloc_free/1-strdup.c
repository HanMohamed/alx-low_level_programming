#include "main.h"

/**
 * _strdup - duple the string
 * @str: String
 *
 * A function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Returns NULL if str = NULL.
 *
 * Return: A pointer to the duplicated string,
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *str_dup;
	int i;
	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		;
	size++;

	str_dup = malloc(sizeof(char) * size);
	if (str_dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str_dup[i] = str[i];
	str_dup[i] = '\0';

	return (str_dup);
}
