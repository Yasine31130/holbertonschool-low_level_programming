#include "main.h"
/**
 *_strspn - check the prefix of the string s with the accept char
 *@s : the string to chekc
 *@accept : the chars you want to count in the prefix
 *Return: unsigned int that is the number of bytes in the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
