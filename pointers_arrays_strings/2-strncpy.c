#include "main.h"
/**
 * _strncpy - description
 * @dest: pointer
 * @src: pointer
 * @n: var num
 * Return: copies a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		if (i < n)
		{
			dest[i++] = '\0';
		}
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
