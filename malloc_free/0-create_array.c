#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - description
 * @size: size of array
 * @c: char on array
 * Return: function that creates an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size * sizeof(c));

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	else 
	{
		return (NULL);
	}
	return (array);

}
