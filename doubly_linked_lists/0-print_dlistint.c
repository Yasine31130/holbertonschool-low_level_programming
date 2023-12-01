#include "lists.h"
/**
 * print_dlistint - description
 * @h: pointer to node
 * Return: he number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const list_t *node;

	if (h == NULL)
	{
		return (0);
	}
	node = h;
	count = 0;
	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", node->len, node->str);
		}
		node = node->next;
		count++;
	}
	return (count);
}
