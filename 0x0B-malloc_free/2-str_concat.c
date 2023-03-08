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
	char *ptr, *empty = "";
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len2++;
	ptr = malloc((len1 + len2) * sizeof(*s1));

	if (ptr == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
