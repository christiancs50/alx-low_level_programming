#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - reuturns the sum of all parameters
 * @n: number of psrameters passed
 * @...: number of parameters to the function
 * Return: 0 or the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0;i < n;i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
