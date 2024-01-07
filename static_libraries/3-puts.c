#include "main.h"

/**
 * _puts - fonction
 * @str: var
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
