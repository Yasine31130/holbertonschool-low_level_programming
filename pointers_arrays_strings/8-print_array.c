#include "main.h"
/**
 * print_array - description
 * @a: pointer to array 
 * @n: var num 
 * Return: prints n elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else 
		{
			printf("%d", a[i]);
		}
		i++;
	}
	putchar('\n');
}
