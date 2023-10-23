#include"main.h"
/**
 * swap_int - description
 * @a: pointer
 * @b: pointer
 * Return: swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
