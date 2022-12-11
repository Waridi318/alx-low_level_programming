#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char C;

	for (C = 'z'; C >= 'a'; C--)
		putchar(C);
	putchar('\n');
	return (0);
}
