#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,except q and e
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
		if (C != 'e' && C != 'q')
			putchar(C);
	putchar('\n');
	return (0);
}
