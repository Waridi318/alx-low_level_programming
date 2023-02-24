#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == 45 || s[i] == 43) && s[i + 1] >= 48 && s[i + 1] <= 57)
		{
			printf("%c",s[i]);
		}
	}
	return (('0' + s[i]));
}
