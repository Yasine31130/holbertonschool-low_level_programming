#include "main.h"
/**
 * reverse_array - description
 * @a: pointer to array
 * @n: van num size of array
 * Return: function that reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	while (i <= n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
