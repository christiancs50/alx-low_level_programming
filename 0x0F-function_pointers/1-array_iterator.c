#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through an array
 * @array: array
 * @size: size
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array ==  NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
