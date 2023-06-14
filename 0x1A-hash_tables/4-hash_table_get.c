#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to be checked
 * @key: parameter to be checked
 * Return: the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	i = hash_djb2((const unsigned char *)key) % ht->size;

	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}

		temp = temp->next;
	}

	return (NULL);
}
