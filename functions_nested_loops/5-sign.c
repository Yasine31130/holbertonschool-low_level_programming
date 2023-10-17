#include "main.h"
/**
 * print_sign - Description
 * @n: variable
 * Return: if n positive return
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	return (0);
}
