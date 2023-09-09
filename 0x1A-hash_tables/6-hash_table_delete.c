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

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->key);
			free(current->value);
			current = current->next;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
