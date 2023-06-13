#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: the arguments of your program
 *
 * A function that concatenates all the arguments of your program.
 * Returns NULL if ac == 0 or av == NULL
 * Each argument should be followed by a \n in the new string
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *args_str;
	int i, j, k, av_size;

	if (ac == 0 || av == NULL)
		return (NULL);

	av_size = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			av_size++;
			j++;
		}
		if (i != ac)
			av_size++;
	}
	av_size++;

	args_str = malloc(sizeof(char) * av_size);
	if (args_str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			args_str[k++] = av[i][j++];
		if (i != ac)
			args_str[k++] = '\n';
	}
	args_str[k] = '\0';

	return (args_str);
}
