#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: str1
 * @src: str2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, count = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = src[j];
	return (dest);
}
