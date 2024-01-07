#include "main.h"

/**
 *_memset - fills the first n bytes of area pointed by s with constant b
 *Return: s
 *@s : pointer to the memory
 *@b : constant value to pass
 *@n : number of bytes to put the value in
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
