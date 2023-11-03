#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *newnode = NULL;

	if (ht == NULL || key == NULL)
	{
	return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);

	newnode = ht->array[i];

	while (newnode != NULL)
	{
	if (strcmp(key, newnode->key) == 0)
	{
	return (newnode->value);
	}

	newnode = newnode->next;
	}
	return (NULL);
}
