#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht:  is the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht || !ht->array || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			current = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
