#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freesa 2 dimensional grid
 * @grid: a pointer to a pointer to an integer
 * @height: height of the 2 dimensional grid
 *
 * Return 0
 */

void free_grid(int **grid, int height);
{
	int i;

	if(grid ==NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free (grid);
}
