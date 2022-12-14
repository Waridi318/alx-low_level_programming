#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: argument
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
