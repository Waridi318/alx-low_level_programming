#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
		putchar(C);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
