#include <stdlib.h>
#include "main.h"

/**
 *array_range - create an array of integer
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = min, j = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	while (i <= max)
	{
		p[j] = i;
		i++, j++;
	}
	return (p);
}
