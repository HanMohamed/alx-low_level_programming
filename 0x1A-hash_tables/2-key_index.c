#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 *
 * This function should use the hash_djb2 function that you wrote earlier
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
