#include "search_algos.h"

/**
* linear_search - searches for a value in an
* array of integers using the Linear search algorithm
* @array: ptr->array[0]
* @size: size of array
* @value: value to search for
* Return: index of value or -1 if not present
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
		return (i);
		}
		else
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
