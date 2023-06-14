#include "hash_tables.h"

/*
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: 0 success
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	char *delim;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	delim = "";

	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];

	while (temp != NULL)
	{
	printf("%s'%s': '%s'", delim, temp->key, temp->value);
	delim = ", ";
	temp = temp->next;
	}
	}

	printf("}\n");
}
