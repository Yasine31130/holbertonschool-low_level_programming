#include "lists.h"
/**
 * add_node_end - description
 * @head: head of the node
 * @str: string
 * Return: Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
