#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initialize a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * a function that returns a pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 *
 * Return: a pointer to the grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
