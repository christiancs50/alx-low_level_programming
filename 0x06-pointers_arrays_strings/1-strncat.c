#include <stdio.h>
#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: value
 * @src: value
 * @n: value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
