#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: integer
 * Return: pointer or (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptmem;

	ptmem = malloc(b);

	if (ptmem == 0)
		exit(98);
	return (ptmem);
}
