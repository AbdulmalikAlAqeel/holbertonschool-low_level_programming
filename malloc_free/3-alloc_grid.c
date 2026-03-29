#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array,
 * NULL on failure or if width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* 1. Validate input dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* 2. Allocate memory for the rows (array of pointers) */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* 3. Allocate memory for each column in every row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		/* If allocation for a row fails, free all previous rows */
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	/* 4. Initialize all elements of the grid to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
