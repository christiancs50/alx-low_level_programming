#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: integer
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c == 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
