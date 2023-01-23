#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: str
 * @f: func
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
