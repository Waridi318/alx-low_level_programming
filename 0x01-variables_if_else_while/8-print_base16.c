#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
