#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer
 *
 * Return: 1(if upper)
 */
int _isupper(int c)
{
	int j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
			return (1);
	}
	return (0);
}
