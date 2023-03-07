#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied
 * @n: bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0, j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
