#include "main.h"
/**
 * _strspn - fct
 * @s: var
 * @accept: var
 * Return: accept here
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;

		}
		i++;
	}
	return (k);
}
