#include "main.h"
/**
 * *_strcat - description
 * @dest: pointer
 * @src: pointer
 * Return:  function appends the src string to the dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
