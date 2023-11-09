#include <stdlib.h>
#include "main.h"
/**
 * create_array - description
 * @size: size of array
 * @c: char on array
 * Return: function that creates an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
