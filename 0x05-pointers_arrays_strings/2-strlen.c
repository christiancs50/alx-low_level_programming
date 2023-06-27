#include <stdio.h>
#include "main.h"
/**
 * int _strlen -  returns the length of a string
 * @s: character
 * Return: length of @s
 */
int _strlen(char *s);
{
	int number = 0;

	while (s[number] != '\0')
		number++;
	return (number);
}
