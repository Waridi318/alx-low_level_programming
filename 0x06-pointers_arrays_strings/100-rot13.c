#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, k;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 53 ; k++)
		{
			if (s[i] == s1[k])
			{
				s[i] = s2[k];
				break;
			}
		}
	}
	return (s);
}
