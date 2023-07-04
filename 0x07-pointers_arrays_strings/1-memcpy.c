#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: unsigned integer
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
