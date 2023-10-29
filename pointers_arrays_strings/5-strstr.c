#include "main.h"

/**
 * _strstr - locates a substring if exactly the same
 * @haystack: string we check
 * @needle: substring searched
 *
 * Return: Pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i]; ++i)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; haystack[i] == needle[j]; ++i, ++j)
				;
			if (needle[j] == '\0')
				return (haystack + i - j);
		}
	}
	return (0);
}
