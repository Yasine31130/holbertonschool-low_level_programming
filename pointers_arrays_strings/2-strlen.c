#include"main.h"
/**
 * _strlen - description
 * @s: pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
