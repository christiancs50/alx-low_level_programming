#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints name
 * @f: variable to hold the string name
 * @name: persons name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
