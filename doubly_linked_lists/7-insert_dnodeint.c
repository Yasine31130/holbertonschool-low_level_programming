#include "lists.h"


/**
 *insert_dnodeint_at_index - inserts a new node in a linked listat index pos
 *@h: pointer to the first node in the list
 *@idx: index where the new node is added
 *@n: data to insert in the new node
 *Return: pointer to the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	tmp = new->next;
	tmp->prev = new;
	return (new);
}
