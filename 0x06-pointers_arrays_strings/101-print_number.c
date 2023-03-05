#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar('0' + n % 10);
}
