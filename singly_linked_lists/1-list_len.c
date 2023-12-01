#include "limits.h"
/**
 * list_len - description
 * @h: pointer to head
 * Return: num of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
