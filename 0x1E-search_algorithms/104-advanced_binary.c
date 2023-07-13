#include "search_algos.h"
/**
* advanced_binary -  searches for a value in a sorted
* array of integers using the Binary search algorithm
* @array: ptr->array[0]
* @size: size of array
* @value: value to search for
* Return: index of value or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
		{
			if (array[mid - 1] == value)
			{
				r = mid;
			}
			else
				return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
