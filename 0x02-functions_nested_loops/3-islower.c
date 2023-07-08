#include "main.h"
/**
 * _islower - 'a function that checks for lowercase character'
 * @c: character identifying lowercase on Ascii
 * Return: 1 for lower case and 0 for rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
