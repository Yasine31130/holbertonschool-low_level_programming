#include"main.h"
/**
 * rev_string - description
 * @s: pointer
 * Return: function that reverses a string.
 */
void rev_string(char *s)
{
	int i = 0;
	int q;
	char str;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (q = 0; q <= i; q++, i--)
	{
		str = s[i];
		s[i] = s[q];
		s[q] = str;
	}
}
