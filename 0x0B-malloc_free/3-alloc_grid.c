#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 *  A function that returns a pointer to a 2 dimensional array of integers.
 *  Each element of the grid should be initialized to 0
 *  If width or height is 0 or negative, return NULL
 *
 * Return: A pointer NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid_integer;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_integer = malloc(sizeof(int *) * height);
	if (grid_integer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_integer[i] = malloc(sizeof(int) * width);
		if (grid_integer[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid_integer[i]);
			free(grid_integer);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
		{
			grid_integer[i][j] = 0;
		}
	}

	return (grid_integer);
}
