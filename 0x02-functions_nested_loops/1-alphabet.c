#include "main.h"

/**
 * print_alphabet - 'Print alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int letters;

	for (letters = 97; letters <= 122; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
