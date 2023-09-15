#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string printed between lines
 * @n: number of integers passed to the function
 * @...: numbers to be printed(parameters)
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list args;
	int value;

	va_start(args, n);
	for (index = 0; index < n; index++)
	{
		if (index > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		value = va_arg(args, int);
		printf("%d", value);
	}
	printf("\n");

	va_end(args);
}


