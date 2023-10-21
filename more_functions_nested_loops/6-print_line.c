#include "main.h"
/**
 * print_line - description
 * @n: var num of lines
 * Return: draws a straight line in the terminal.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
