#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */

int main(void)

{
	int  lowercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');

	return (0);
}

