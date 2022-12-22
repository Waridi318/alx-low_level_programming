#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer
 *
 * Return: 1(if upper)
 */
int _isupper(int j)
{
	if (j >= 'A' && j <= 'Z')
		return (1);
	else
		return (0);
}
