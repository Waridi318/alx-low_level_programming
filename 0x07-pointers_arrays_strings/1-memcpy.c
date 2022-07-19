#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: source buffer
 * @n: bytes of memory
 * Return: stuff
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
