#include "main.h"

/**
 * _isalpha - Description fonction
 * @c: The character to be checked.
 * Return: Always 0 (succes)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
