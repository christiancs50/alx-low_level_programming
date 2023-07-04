#include <stdio.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: character
 * @accept: character
 * Return:  *s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int len_s;

	for (; *s; s++)
	{
		for (len_s = 0; accept[len_s]; len_s++)
		{
			if (*s == accept[len_s])
			{
				n++;
				break;
			}
			else if (accept[len_s + 1] == '\0')
				return (n);
		}
	}
}
