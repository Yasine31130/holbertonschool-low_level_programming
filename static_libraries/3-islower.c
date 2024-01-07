#include "main.h"

/**
 * _islower - Description pour main
 * @c: The character to be checked.
 * Return: Always 0 (succes)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
