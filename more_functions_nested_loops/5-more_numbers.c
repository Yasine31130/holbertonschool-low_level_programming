#include "main.h"
/**
 * more_numbers - description
 * Return: prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	int x = 0;

	while(x < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
				i++;
		}
		_putchar('\n');
		x++;
	}
}
