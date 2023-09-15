#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of types of argument
 * Return : none
 */
void print_all(const char * const format, ...)
{
	const char *sep = " ";;
	char *str;
	int i = 0;
	va_list list;

	va_start(list, format);

	while ( format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				printf("%s", (str != NULL) ? str : "(nil)");
				break;
			default:
				i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
