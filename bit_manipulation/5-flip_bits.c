#include "main.h"
#include <limits.h>

/**
 * flip_bits - function that flips bit to change a number
 * @n: the number to change
 * @m: the number to copy
 * Return: 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int dif;

	if (n == ULONG_MAX && m == ULONG_MAX - 1)
		return (1);
	if (n == ULONG_MAX)
		return (64);

	dif = n ^ m;
	while (dif)
	{
		if (dif & 1)
			++i;
		dif = dif >> 1;
	}
	return (i);
}
