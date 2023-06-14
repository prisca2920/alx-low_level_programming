#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 * Return: 0 success
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *newnode;

	if (ht == NULL)
	{
	return;
	}

	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];

	while ((newnode = temp) != NULL)
	{
	temp = temp->next;

	free(newnode->key);
	free(newnode->value);
	free(newnode);

	}
	}

	free(ht->array);
	free(ht);
}
