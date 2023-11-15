#include"function_pointers.h"
/**
 * int_index - description
 * @array: pointer to array
 * @size: of array
 * @cmp: pointer to function
 * Return: function that searches for an integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int q = 0;

	if (array != NULL && *cmp != NULL)
	{
		while (i < size)
		{
			q = cmp(array[i]);
			if (q != 0)
			{
				return (i);
			}
			i++;
		}

	}
	return (-1);
}
