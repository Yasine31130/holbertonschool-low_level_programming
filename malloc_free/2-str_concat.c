#include "main.h"
#include <stdlib.h>
/**
 * str_concat - description
 * @s1: pointer to string
 * @s2: pointer to second string
 * Return: function that concatenates two strings.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int q = 0;
	char *ptr = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[q] != '\0')
	{
		q++;
	}
	q++;
	ptr = malloc((i + q) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	q = 0;
	while (s2[q] != '\0')
	{
		ptr[i] = s2[q];
		i++;
		q++;
	}

	return (ptr);
}
