#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: character
 * @src: character
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int s = -1;

	do {
		s++;
		dest[s] = src[s];
	}
	while
	{
		(src[s] != '\0');
	}

	return (dest);
}
