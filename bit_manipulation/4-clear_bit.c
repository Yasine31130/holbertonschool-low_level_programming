#include "main.h"

/**
 * clear_bit - function that set the value of a bit to 0 at given index
 * @n: given number to work on
 * @index: given index to set
 * Return: return 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
