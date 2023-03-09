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
	int **ptr;
	int j, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
		i++;
	}
	return (ptr);
}
