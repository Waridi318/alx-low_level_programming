#include "search_algos.h"
/**
* jump_search - jump search algorithm
* @array: ptr->array[0]
* @size: size of array
* @value: value to search for
* Return: index of value or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, k, l, jumps = sqrt(size);

	if (array != NULL)
	{
		for (i = 0; i < (size + jumps); i += jumps)
		{
			if (array[i] >= value && i < size)
			{
				if (i == 0 && value <= array[0])
				{
					printf("Value checked array[0] = [%d]\n", array[0]);
					if (value < array[0])
						return (-1);
					printf("Value found between indexes [%lu] and [%lu]\n", i, i + jumps);
					return (i);
				}
				printf("Value found between indexes [%lu] and [%lu]\n", (i - jumps), i);
				for (k = (i - jumps); k <= i; k++)
				{
					printf("Value checked array[%lu] = [%d]\n", k, array[k]);
					if (array[k] == value)
						return (k);
				}
			}
			else if (i >= size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", (i - jumps), i);
				for (l = (i - jumps); l < size; l++)
				{
					printf("Value checked array[%lu] = [%d]\n", l, array[l]);
					if (array[l] == value)
						return (l);
				}
			}
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			continue;
		}
	}
	return (-1);
}
