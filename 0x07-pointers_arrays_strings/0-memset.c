#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
