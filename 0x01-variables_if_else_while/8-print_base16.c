#include <stdio.h>
/**
 * main - Entry point
 * Description:'prints all the numbers of base 16 in lowercase'
 * Return: Always 0 (success)
 */

int main(void)
{
	int hex_num;

	for (hex_num = 0; hex_num < 16; hex_num++)
	{
		if (hex_num < 10)
		{
			putchar(hex_num + '0');
		}
		else
		{
			putchar(hex_num - 10 + 97);
		}
	}
	putchar('\n');

	return (0);
}
