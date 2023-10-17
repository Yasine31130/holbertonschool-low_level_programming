#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
