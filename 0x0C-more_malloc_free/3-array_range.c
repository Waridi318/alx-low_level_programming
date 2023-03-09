#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: ptr -> array
 */
int *array_range(int min, int max)
{
	int *ptr, i, len = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
