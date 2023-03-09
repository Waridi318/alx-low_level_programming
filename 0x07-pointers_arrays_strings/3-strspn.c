#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to be checked
 * Return: number of bytes in the initial segment
 *	 of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i, len = 0;
	unsigned int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				break;
			}
			if (j == len - 1)
				return (count);
		}
	}
	return (count);
}
