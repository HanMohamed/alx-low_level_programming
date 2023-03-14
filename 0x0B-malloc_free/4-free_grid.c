#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: A 2 dimensional grid
 * @height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL)
	{

		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
				free(grid[i]);
		}
		free(grid);
	}
}
