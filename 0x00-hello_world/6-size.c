/**
 * main - Entry point
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int i = sizeof(char);
	int j = sizeof(int);
	int k = sizeof(long int);
	int l = sizeof(long long int);
	int m = sizeof(float);

	printf("Size of a char: %d byte(s)", i);
	printf("Size of an int: %d byte(s)", j);
	printf("Size of a long int: %d byte(s)", k);
	printf("Size of a long long int: %d byte(s)", l);
	printf("Size of a float: %d byte(s)", m);

	return (0);
}
