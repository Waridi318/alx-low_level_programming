#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exec a func given as a param on each element of an [].
 * @array: [integers]
 * @size: sizeof(array)
 * @action: func *p
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
