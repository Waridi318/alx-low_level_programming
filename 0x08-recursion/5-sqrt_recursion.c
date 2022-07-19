#include "main.h"

/**
 * _sqrt_recursion - returns 1 if the input integer is a prime number
 *					otherwise return 0
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - main
 * @n: int
 * @val: sqrt
 * Return: int
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
