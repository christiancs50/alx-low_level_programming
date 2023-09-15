#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string printed between the strings
 * @n: number of strings passed
 * @...: more parameters to be passed
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && index < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
