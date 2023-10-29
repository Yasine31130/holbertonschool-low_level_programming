#include "main.h"
/**
 * leet - description
 * @s: poiter to string
 * Return: function that encodes a string into 1337
 */
char *leet(char *)
{
	int i;
	int len = 0;
	char ref[] = {'a', 'e', 'o', 't', 'l'};
	char base[] = {'4', '3', '0', '7', '1'};

	while (s[len] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((s[len] == ref[i]) || (s[len] == (ref[i] - 32)))
			{
				s[len] = base[i];
			}
		}
		len++;
	}
	return (s);
}
