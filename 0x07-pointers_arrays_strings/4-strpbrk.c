#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: ptr -> byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; accept[i] != '\0'; i++)
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	if (s[i] == '\0')
	{
		if (s[i] == accept[j - 1])
			return (s + i);
	}
	return (0);
}
