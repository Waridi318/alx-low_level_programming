#include "search_algos.h"
/**
* interpolation_search - interpolation search algorithm
* @array: ptr->array[0]
* @size: size of array
* @value: value to search for
* Return: index value or -1 if not found
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));
	if (value > array[high])
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}
	return (-1);
}
