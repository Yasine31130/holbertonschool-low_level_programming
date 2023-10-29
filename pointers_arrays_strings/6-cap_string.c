#include "main.h"
/**
 * *cap_string - description
 * @s: pointer to string
 * Return: function that capitalizes all words of a string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
