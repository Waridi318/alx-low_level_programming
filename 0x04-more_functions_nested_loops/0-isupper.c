#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: char
 * Return: 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{

	if (i == c)
	{
		return (1);
	}
	}

	return (0);
}
