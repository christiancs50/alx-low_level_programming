#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	ptArray = malloc(sizeof(char) * size);
	if (size == 0 || ptArray == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		ptArray[count] = c;
	return (ptArray);
}
