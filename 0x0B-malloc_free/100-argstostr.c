#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @av: argument vector
 * @ac: argument count
 *
 * Each argument should be followed by a \n in the new string
 * if NULL is passed, treat it as an empty string
 * Return: a pointer to a new string, or NULL if it fails
 *
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int width;
	int i;
	int j;
	int k = 0;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			width++;
		width++;
	}
	width += ac;
	concat = malloc((width + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k++] = '\n';
	}
	concat[k++] = '\0';
	return (concat);
}
