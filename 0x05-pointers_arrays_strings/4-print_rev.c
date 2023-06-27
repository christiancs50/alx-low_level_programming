#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character
 * Return: Always 0
 */
void print_rev(char *s)
{
	int number = 0;

	while (*s)
	{
		s++;
		number++;
	}
	while (number)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n'
}
