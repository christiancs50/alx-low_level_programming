#include <stdio.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: integer
 * Return: A pointer to the memomery area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
