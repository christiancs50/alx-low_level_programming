#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase, and then in uppercase'
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowercase;
	int uppercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 65; uppercase <= 90; uppercase++)
	{
		putchar(uppercase);
	}

	putchar ('\n');

	return (0);
}
