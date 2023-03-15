#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid/array
 * @grid: two dimensional grid/array
 * @height: rows
 */

void free_grid(int **grid, int height)
{
	int bow;

	for (bow = 0; bow < height; bow++)
		free(grid[bow]);

	free(grid);
}

