#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: a string to be copied
 * a function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 * or returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	size++;
	copy = malloc(size * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];
	return (copy);
}
