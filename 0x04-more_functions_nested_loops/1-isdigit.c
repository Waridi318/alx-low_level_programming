#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: char
 * Return: 1 (Failure), 0 (Success)
 */

int _isdigit(int c)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1)
		}
	}
	return (0);
}
