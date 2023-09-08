#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 *
 * If something went wrong, your function should return NULL
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **hash_node;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;

	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->array = hash_node;

	return (hash_table);
}
