#include "main.h"
/**
 * print_last_digit - decription
 * @n: var number
 * Return:  the last digit of a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);

}
