#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-D array
 * @width: column
 * @height: row
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int j, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
		i++;
	}
	return (grid);
}
