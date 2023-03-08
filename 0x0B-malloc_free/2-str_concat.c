#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: str1
 * @s2: str2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	ptr = malloc(sizeof(*s1) + sizeof(*s2) + 1);

	if (ptr == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
