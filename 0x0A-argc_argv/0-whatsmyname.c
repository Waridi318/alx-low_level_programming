#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
	
}
