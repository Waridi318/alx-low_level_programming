#include "main.h"

/**
 * last_index - returns 1 if a string is a palindrome and 0 if not
 * @s: *p -> str
 * Return: bin
 */

int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - check if palindrome
 * @s: str
 * Return: bin
 */

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker
 * @s: str
 * @start: int(left -> right)
 * @end: int(left -> right)
 * @pair: int
 * Return: bin
 */

int check(char *s, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
