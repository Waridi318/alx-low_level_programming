#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: *main
 * @n: n bytes to print
 * Return: (O_o)
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its *main
 * @argc: number of args passed to the function
 * @argv: [*p] -> args
 * Return: Always 0 -> (Success)
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
