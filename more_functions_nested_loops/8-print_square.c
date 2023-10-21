#include "main.h"
/**
 * print_square - description
 * @size: var num size
 * Return: prints a square, followed by a new line
 */
void print_square(int size)
{
	int i = 0;

	if (size == 0)
	{
		putchar('\n');
	}
	while (i < size)
	{
		int s = 1;

		while (s < size)
		{
			putchar('#');
			s++;
		}
		putchar('#');
		i++;
		putchar('\n');
	}
}
