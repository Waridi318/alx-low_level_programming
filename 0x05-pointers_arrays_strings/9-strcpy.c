#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest
 * @dest: buffer to be copied to
 * @src: string to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		count++;
	}

	for (j = 0; j <= count; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
