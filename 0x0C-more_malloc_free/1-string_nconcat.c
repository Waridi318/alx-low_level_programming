#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: int
 * Return: ptr -> concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	len2++;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = len1, j = 0; j <= n; i++, j++)
		ptr[i] = s2[j];
	return (ptr);
}
