#include "main.h"
#include <stddef.h>

/**
 * _strlen - fonction
 * @s: var
 * Return: length of s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
