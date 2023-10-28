#include"main.h"
/**
 * _strcmp - description
 * @s1: pointer to string
 * @s2: pointer to second string
 * Return: function that compares two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
