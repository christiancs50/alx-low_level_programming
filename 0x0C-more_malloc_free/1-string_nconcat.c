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
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;


	s = malloc(sizeof(char) * (len1 + n + 1));

	if (!s)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		s[i++] = s2[j];

	s[i] = '\0';
	return (s);
}
