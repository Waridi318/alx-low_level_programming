#include "variadic_functions.h"

/**
 * sum_them_all - sum all args
 * @n: n args to sum
 * Return: sumof(args)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (!n)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}
