#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free previous alloc_grid function
 * @grid: memory to be freed
 * @height: int
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
		free(grid[i]);
}
