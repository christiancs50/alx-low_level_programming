#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: Character
 * Return: Always 0
 */
void puts2(char *str)
{
	int number = 0;
	int i;

	while (*str)
	{
		number++;
		str++;
	}
	for (i = 0; i < number; i++)
		str--;

	for (i = 0; i < number; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
