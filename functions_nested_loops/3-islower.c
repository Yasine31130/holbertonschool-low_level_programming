#include "main.h"
#include <stdio.h>
/**
 * _islower - check the code
 * @c: variable char
 * Return: Always 1 if lowercase or 0 if other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
