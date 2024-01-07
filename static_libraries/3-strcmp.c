#include "main.h"
/**
 * _strcmp - fct
 * @s1: var
 * @s2: var
 * Return: pointeurs
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
