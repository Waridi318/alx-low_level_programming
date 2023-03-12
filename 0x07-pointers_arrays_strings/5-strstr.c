#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: str
 * @needle: substr
 * Return: ptr -> needle in str
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *n;
	char *h;

	while (*start != '\0')
	{
		n = needle;
		h = start;
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (start);
		start++;
	}
	return (0);
}
