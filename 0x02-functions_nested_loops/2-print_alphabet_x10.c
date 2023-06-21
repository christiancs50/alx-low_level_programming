#include "main.h"

/**
 * print_alphabet_x10 - 'Print 10 times the  alphabet, in lowercase'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int letters;
	int num10;

	for (num10 = 1; num10 <= 10; num10++)
	{
		for (letters = 97; letters <= 122; letters++)
		{
			_putchar(letters);
		}
	_putchar('\n');
	}
}
