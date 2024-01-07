#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look inside
 * @key: key we want to retrieve
 * Return: the value associated with the element or NULL if key could not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *actual;

	if (ht && key)
	{
		idx = key_index((unsigned char *)key, ht->size);
		actual = ht->array[idx];
		while (actual)
		{
			if (!strcmp(actual->key, key))
				return (actual->value);
			actual = actual->next;
		}
	}
	return (NULL);
}
