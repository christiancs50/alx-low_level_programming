#include <stdio.h>
/**
 * main - Entry point
 * Description - 'Prints the lowercase alphabet in reverse'
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowercase;

	for (lowercase = 122; lowercase >= 97; lowercase--)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
