#include <stdio.h>
#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		for (; *h == *n && *n != '\0'; h++, n++)
		;
		
		if (*n == '\0')
		return (haystack);
	}
	return (NULL);
}
