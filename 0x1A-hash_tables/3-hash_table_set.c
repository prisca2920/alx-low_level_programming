#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the new element
 * @key: char to be checked
 * @value: parameter to be checked
 * Return: the new hast table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
	{
		return (0);
	}

	i = hash_djb2((const unsigned char *)key) % ht->size;

	temp->key = strdup(key);
	temp->value = strdup(value);

	temp->next = ht->array[i];
	ht->array[i] = temp;


	return (1);
}
