#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->size = size;
	return (ht);
}
