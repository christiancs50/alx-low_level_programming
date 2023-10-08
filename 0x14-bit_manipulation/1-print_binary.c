include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n:the number to be printed.
 */

void print_binary(unsigned long int n)
{
	int print, bit_pos;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0'); /*print "0" if num is = 0 */
		return;
	}

	bit_pos = sizeof(unsigned long int) * 8 - 1;
	print = 0;

	while (bit_pos >= 0)
	{
		/* create a var with a single 1 at the curr. bit pos. */
		mask = 1UL << bit_pos;

		if ((n & mask) != 0)
		{
			/* if the current bit pos is 1,print 1 */
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			/* if 1 is printed print '0' for trailing zero */
			_putchar('0');
		}

		bit_pos--;
	}
}

