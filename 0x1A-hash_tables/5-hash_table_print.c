#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht:  is the hash table
 *
 * You should print the key/value in the order that
 * they appear in the array of hash table
 *  Order: array, list
 *
 * If ht is NULL, don’t print anything
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int print = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			/* print == 1 */
			if (print)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			print = 1;
			current = current->next;
			if (current)
			{
				printf(", ");
				print = 0;
			}
		}
		if (i == ht->size - 1)
			printf("}\n");
	}
}
