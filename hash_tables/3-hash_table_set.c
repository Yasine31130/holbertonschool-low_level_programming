#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: hash table to add or update
 *@key: the key and may not be an empty string
 *@value: value associated with key
 *Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nex, *actual;
	unsigned long int idx;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		actual = ht->array[idx];
		while (actual)
		{
			if (!strcmp(key, actual->key))
			{
				free(actual->value);
				actual->value = strdup(value);
				if (!actual->value)
					return (0);
				return (1);
			}
			actual = actual->next;
		}
	}
	nex = malloc(sizeof(hash_node_t));
	if (!nex)
		return (0);
	nex->key = strdup(key);
	if (!nex->key)
		return (0);
	nex->value = strdup(value);
	if (!nex->value)
		return (0);
	nex->next = ht->array[idx];
	ht->array[idx] = nex;
	return (1);
}
