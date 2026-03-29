#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* 1. Safety check: if grid is already NULL, do nothing */
	if (grid == NULL || height <= 0)
	{
		return;
	}

	/* 2. Free each individual row first */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 3. Finally, free the main pointer (the array of pointers) */
	free(grid);
}
