#include "dog.h"
/**
 * free_dog - description
 * @d: ptr to struct
 * Return: function that frees dogs.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
