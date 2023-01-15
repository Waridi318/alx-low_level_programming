#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: chra
 * @dest: char
 * @n: int
 * Return: stuff
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
