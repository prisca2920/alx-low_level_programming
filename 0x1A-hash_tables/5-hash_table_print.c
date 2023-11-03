#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: the ht or NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter = 0;
	hash_node_t *newnode = NULL;

	if (ht == NULL)
	{
	return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	newnode = ht->array[i];

	while (newnode != NULL)
	{
	if (counter != 0)
	{
	printf(", ");
	}
	printf("'%s': '%s'", newnode->key, newnode->value);

	newnode = newnode->next;
	counter++;
	}
	}
	printf("}\n");
}
