#include "hash_tables.h"
/**
 * hash_table_delete - function that delete a hash table
 * @ht: pointer to the wanted hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *nex;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				nex = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = nex;
			}
		}
	}
	free(ht->array);
	free(ht);
}
