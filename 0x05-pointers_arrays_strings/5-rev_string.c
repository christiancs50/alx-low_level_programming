#include <stdio.h>
#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int number, i;
	char temp;

	for (number = 0; s[number] != '\0'; ++number)
		;
	for (i = 0; i < number / 2; i++)
	{
		temp = s[i];
		s[i] = s[number - 1 - i];
		s[number - 1 - i] = temp;
	}
}
