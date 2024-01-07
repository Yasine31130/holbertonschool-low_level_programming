#include "hash_tables.h"

/**
 *hash_table_create - Creates a hash table
 *@size: size of a given array
 *Return: pointer to newly created table if succeed or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	if (!size)
		return (NULL);
	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);
	hasht->size = size;
	hasht->array = calloc(size, sizeof(hash_node_t *));
	if (!hasht->array)
	{
		free(hasht);
		return (NULL);
	}
	return (hasht);
}
