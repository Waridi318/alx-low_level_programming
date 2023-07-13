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
	size_t l = 0, r = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (binary_searcha(array, l, r, value));

}
/**
* binary_searcha - binary search algorithm
* @array: array
* @low: lower value
* @high: higher value
* @value: value to search for
* Return: index of value or -1 if not found
*/
int binary_searcha(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
		{
			if (array[mid - 1] == value)
			{
				return (binary_searcha(array, low, mid, value));
			}
			else
				return (mid);
		}
		else if (value < array[mid])
		{
			return (binary_searcha(array, low, mid - 1, value));
		}
		else
		{
			return (binary_searcha(array, mid + 1, high, value));
		}
	}
	return (-1);
}
