#include"dog.h"
/**
 * new_dog - description
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenn = strlen(name);
	int leno = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (lenn++));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (leno++));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}
