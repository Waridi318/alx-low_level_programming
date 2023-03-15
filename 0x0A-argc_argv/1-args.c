#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: number of args
 * @argv: args
 * Return: exit 0 on success
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	exit(0);
}
