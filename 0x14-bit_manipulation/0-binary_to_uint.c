#include "main.h"

/**
 * binary_to_uint - convert binary no to an unsigned int
 * @b: pointer to string
 * Return: if 0 or invalid- 0 or convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			/* for invalid character, return 0 as per the requ..t */
			return (0);

		/* shift the existing result left by one bit position */
		/* and add the current binary digit to it */
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
