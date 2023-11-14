#include "function_pointers.h"
/**
 * array_iterator - description
 * @array: pointer to array
 * @size: of array
 * @action: pointer to function
 * Return: executes a function given as a parameter for each elem of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && *action != NULL)
	{
		while(i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
