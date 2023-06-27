#include <stdio.h>
#include "main.h"
/**
 * int _strlen -  returns the length of a string
 * @s: character
 * Return: length of @s
 */
int _strlen(char *s)
{
	int number;

	for (number = 0; *s != '\0'; s++)
		number++;
	return (number);
}
