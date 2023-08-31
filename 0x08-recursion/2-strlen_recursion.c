#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: integer
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	int sLenght = 0;

	if (*s)
	{
		sLenght++;
		sLenght += _strlen_recursion(s + 1);
	}
	return (sLenght);
}
