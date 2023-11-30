#include "lists.h"
/**
 * print_list - description
 * @h: pointer to string
 * Return: Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
	}
	return (count);
}
