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

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[x] != '\0')
	{
		src[i] = dest[x];
		i++;
		x++;
	}
	return (dest);
}
