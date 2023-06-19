#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all the letters in lowercase except q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		if (lowercase != 101 && lowercase != 113)
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
