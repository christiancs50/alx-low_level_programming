#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: integers
 * @size: number of elkements in an array
 * @cmp: a pointer to the fuction
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1); /* Return -i if size is not valid */
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1); /* Return -1 for invalid input */
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i); /* Return the index when a match is found */
		}
	}

	return (-1); /* Return -1 if no element matches */
}
