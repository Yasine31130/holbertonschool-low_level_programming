#include "main.h"
/**
 * print_diagonal - description
 * @n: var num of lines
 * Return: draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int s = 0;

		while (s < i)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
