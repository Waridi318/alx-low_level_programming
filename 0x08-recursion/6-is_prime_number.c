#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *					otherwise return 0
 * @n: int
 * Return: bin
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checker(division)
 * @n: int
 * @resp: int
 * Return: stuff
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
