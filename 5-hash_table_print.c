#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *actual;
	int start;

	if (ht)
	{
		start = 1;
		printf("{");
		for (i = 0; i < ht->size; ++i)
		{
			if (ht->array[i])
			{
				actual = ht->array[i];
				while (actual)
				{
					if (!start)
						printf(", ");
					printf("'%s': '%s'", actual->key,
							actual->value);
					actual = actual->next;
				}
				start = 0;
			}
		}
		printf("}\n");
	}
}
