#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: copy of str
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	if (str == 0 || ptr == 0)
		return (0);
	return (ptr);
}
