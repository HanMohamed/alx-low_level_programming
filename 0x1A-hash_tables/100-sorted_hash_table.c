#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - a function that creates a shash table.
 * @size: is the size of the array
 *
 * If something went wrong, your function should return NULL
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);

	shash_table->size = size;

	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!shash_table->array)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * check_set - a helper function
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 *  value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int check_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp;
	unsigned long int index;

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
	return (0);
}

/**
 * set_node - set node in the sorted list
 * @ht: is the hash table
 * @shash_node: the new node to be set in its place
 */
void set_node(shash_table_t *ht, shash_node_t *shash_node)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = shash_node;
		shash_node->snext = NULL;
		shash_node->sprev = NULL;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext)
			temp = temp->snext;
		temp->snext = shash_node;
		shash_node->sprev = temp;
		ht->stail = shash_node;
	}
}

/**
 * shash_table_set - a function that adds an element to the shash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 *  value can be an empty string
 *
 * In case of collision, add the new node at the beginning of the list
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *shash_node;
	shash_node_t *temp;
	unsigned long int index;
	int set;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	set = check_set(ht, key, value);
	if (set == 1)
		return (1);

	shash_node = malloc(sizeof(shash_node_t));
	if (!shash_node)
		return (0);
	shash_node->key = strdup(key);
	shash_node->value = strdup(value);
	shash_node->next = NULL;

	set_node(ht, shash_node);

	if (!ht->array[index])
	{
		ht->array[index] = shash_node;
		return (1);
	}
	temp = ht->array[index];
	shash_node->next = temp;
	ht->array[index] = shash_node;
	return (1);
}

/**
 * shash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the shash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 *  or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - a function that prints a shash table.
 * @ht:  is the shash table
 *
 * You should print the key/value in the order that
 * they appear in the array of shash table
 *  Order: array, list
 *
 * If ht is NULL, don’t print anything
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int print = 0;

	if (!ht)
		return;

	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		/* print == 1 */
		if (print)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		print = 1;
		current = current->snext;
		if (current)
		{
			printf(", ");
			print = 0;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function that prints a shash table in reverse.
 * @ht:  is the shash table
 *
 * You should print the key/value in the order that
 * they appear in the array of shash table
 *  Order: array, list
 *
 * If ht is NULL, don’t print anything
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int print = 0;

	if (!ht)
		return;

	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		/* print == 1 */
		if (print)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		print = 1;
		current = current->sprev;
		if (current)
		{
			printf(", ");
			print = 0;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - a function that deletes a hash table.
 * @ht:  is the hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current;
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
