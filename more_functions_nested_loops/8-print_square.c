#include "main.h"
/**
 * print_square - description
 * @size: var num size
 * Return: prints a square, followed by a new line
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		int s = 1;

		while (s < size)
		{
			_putchar('#');
			s++;
		}
		_putchar('#');
		i++;
		_putchar('\n');
	}
}
