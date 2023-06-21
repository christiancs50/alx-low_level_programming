#include "main.h"
/**
 *  _isalpha - 'a function that checks for alphabetic character'
 *  c: character representing a letter
 *  Return: 1 for a letter or 0 to rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
