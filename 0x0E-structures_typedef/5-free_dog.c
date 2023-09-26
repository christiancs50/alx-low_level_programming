#include "dog.h"

/**
 * free_dog - Free the memory allocated for astructf dog
 * @d: Pointer to the struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* frees the dynamically allocated name an d owner strikng */
		free(d->name);
		free(d->owner);

		/* free the memory allocated for the struct dog itself */
		free(d);
	}
}
