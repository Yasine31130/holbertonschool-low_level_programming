#include "dog.h"
/**
 * init_dog - description
 * @d: struct of dog
 * @name: name of dog
 * @age: of dog
 * @ownef: of dog
 * Return: function that initialize a variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = "Poppy";
		d.age = 3.5;
		d.owner = "Bob";
	}

}
