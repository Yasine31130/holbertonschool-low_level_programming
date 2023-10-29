#include "main.h"
/**
 *_memcpy - copy the memory
 *@src : source
 *@dest : destination
 *@n : integer
 *Return: destination array
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
