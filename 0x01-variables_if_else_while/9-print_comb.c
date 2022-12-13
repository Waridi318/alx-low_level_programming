#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
