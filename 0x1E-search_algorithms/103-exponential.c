#include "search_algos.h"
/**
* exponential_search - exponential search algorithm
* @array: array
* @size: size of array
* @value: value to search for
* Return: index of value or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start_index, end_index, new_array_size, index;
	int *new_array;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		i = i * 2;
	}
	start_index = i / 2;
	end_index = i;
	new_array_size = (end_index - start_index) + 1;
	new_array = create_array(array, new_array_size, start_index);

	index = binary_search(new_array, new_array_size, value);
	return (index);
}
int *create_array(int *array, size_t size, size_t start_index)
{
	int new_array[size];
	size_t j;

	for (j = 0; j < size; j++)
		new_array[j] = array[start_index + j];
	return (new_array);
}
