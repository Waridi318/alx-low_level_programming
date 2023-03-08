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
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	ptr = malloc(len * sizeof(*str));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}
