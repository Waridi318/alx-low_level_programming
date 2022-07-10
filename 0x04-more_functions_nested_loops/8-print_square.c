#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: int
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (b = 2; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
