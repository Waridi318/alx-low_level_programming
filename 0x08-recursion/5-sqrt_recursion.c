#include "main.h"

/**
 * _sqrt_recursion - returs the natural square root of a number
 * @n: base
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - returns the square value of a number
 * @n: square
 * @x: base
 * Return: integer
 */

int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqr(n, x + 1));
	else
		return (-1);
}
