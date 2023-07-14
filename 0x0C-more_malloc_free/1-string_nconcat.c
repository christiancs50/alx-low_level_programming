#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to a specified number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total_len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		total_len = len1 + len2;
	else
		total_len = len1 + n;

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	strncpy(str, s1, len1);
	strncat(str, s2, n);
	str[total_len] = '\0';

	return (str);
}
