#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: chars
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char k;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = (count - 1), i = 0; j > i; j--, i++)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}
