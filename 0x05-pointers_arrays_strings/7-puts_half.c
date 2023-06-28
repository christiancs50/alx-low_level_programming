#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: character
 * Return: Always 0
 */

void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;

	for (c /= 2; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
