#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *	 and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	for (i = 0; i <= size; i++)
		ptr[i] = c;
	if (size == 0 || ptr == 0)
		return (0);
	return (ptr);
}
