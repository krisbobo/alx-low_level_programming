#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hashtable
 * @ht: the hashtable to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *tmp;
	hash_node_t *tmpn;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				tmpn = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmpn;
			}
		}
	}
		free(ht->array);
	free(ht);

}
