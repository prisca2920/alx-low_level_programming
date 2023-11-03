#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newnode = NULL;
	hash_node_t  *temp = NULL;
	unsigned long int i;

	if (ht == NULL)
	{
	return;
	}

	for (i = 0; i < ht->size; i++)
	{
	newnode = ht->array[i];

	while (newnode)
	{
	temp = newnode->next;
	free(newnode->key);
	free(newnode->value);
	free(newnode);
	newnode = temp;
	}
	}

	free(ht->array);
	free(ht);
}
