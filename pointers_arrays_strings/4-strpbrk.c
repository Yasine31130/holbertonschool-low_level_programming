#include "main.h"
/**
 *_strpbrk - check the prefix of the string s with the accept char
 *@s : the string to chekc
 *@accept : the chars you want to count in the prefix
 *Return: s + i or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
