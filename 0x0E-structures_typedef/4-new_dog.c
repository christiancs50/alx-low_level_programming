#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Create a new dog with copied name and owner
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name of the dog
 *
 * Return: Pointer to the newly created dog, or Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Designate memory for a new struct dog */
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	/* check if any of the input pointers are NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* check if memory allocation was successful */
	if (new_dog_ptr == NULL)
		return (NULL);
	/*Designate mempry and copy */
	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	/* check if string copying was successful */
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		/* Free allocated memory in case of error */
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	/* set the age field */
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
