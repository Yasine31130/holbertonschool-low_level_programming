#include "main.h"
#include <stdlib.h>
/**
 * _strdup - description
 * @str: pointer to string
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
