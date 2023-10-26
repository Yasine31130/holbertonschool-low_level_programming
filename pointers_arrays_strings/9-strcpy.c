#include "main.h"
#include<stdio.h>
/**
 * *_strcpy - description
 * @dest: pointer destination
 * @src: pointer source
 * Return: copies the string pointed to by src to by dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
