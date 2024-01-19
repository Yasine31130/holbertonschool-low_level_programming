#include "search_algos.h"

/**
 *linear_search - function that search for a value in an array linear algo
 *@array: is a pointer tto the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
