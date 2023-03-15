#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of args
 * @argv: args
 * Return: exit 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(0);
}
