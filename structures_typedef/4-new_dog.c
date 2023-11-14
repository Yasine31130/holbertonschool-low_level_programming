#include"dog.h"
/**
 * _strdup - Description
 * @str: var
 * Return: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 */
char *_strdup(char *str);

char *_strdup(char *str)
{
	char *ptr = NULL;
	int i = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
