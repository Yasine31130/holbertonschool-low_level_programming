#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that check the memory allocation
 * @b: unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	(void)p;

	return (p);
}
