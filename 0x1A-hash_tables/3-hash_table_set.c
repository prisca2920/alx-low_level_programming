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
	hash_table_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	*temp = malloc(sizeof(hash_table_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	i = hash_djb2(*key % ht->size);

	temp->key = strdup(key);
	temp->value = strdup(value);

	temp->next = ht->array[i];
	ht->array[i] = temp;


	return (1);
}
