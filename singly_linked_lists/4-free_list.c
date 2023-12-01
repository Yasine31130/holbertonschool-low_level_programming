#include "lists.h"
/**
 * free_list - description
 * @head: head of node
 * Return: frees a list_t list.
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (head != NULL)
	{
		head = node->next;
		free(node->str);
		free(node);
		node = head;
	}
}
