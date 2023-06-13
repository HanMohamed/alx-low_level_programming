#include "main.h"

/**
 * free_grid - free a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
