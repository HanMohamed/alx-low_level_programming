#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 *  value can be an empty string
 *
 * In case of collision, add the new node at the beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	hash_node_t *temp;
	unsigned long int index;

	if (!ht)
		ht = hash_table_create(1024);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		else if (strcmp(temp->value, value) == 0)
		{
			free(temp->key);
			temp->key = strdup(key);
			return (1);
		}
		temp = temp->next;
	}

	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;

	if (!ht->array[index])
	{
		ht->array[index] = hash_node;
		return (1);
	}

	temp = ht->array[index];
	hash_node->next = temp;
	ht->array[index] = hash_node;
	return (1);
}
