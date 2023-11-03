#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the ht
 * @ht: the hash table you want to add or update the key
 * @key: the key
 * @value: the value associated with the key.
 * Return: the new node
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = NULL;
	char *value_cpy = NULL;
	char *key_cpy = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
	{
	return (0);
	}

	key_cpy = strdup(key);
	value_cpy = strdup(value);

	i = hash_djb2((const unsigned char *)key_cpy) % (ht->size);

	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
	{
	return (0);
	}

	newnode->key = key_cpy;
	newnode->value = value_cpy;
	newnode->next = NULL;

	if (ht->array[i] && strcmp(ht->array[i]->key, key) != 0)
	{
	newnode->next = ht->array[i];
	}

	else if (ht->array[i])
	{
	free(ht->array[i]->key);
	free(ht->array[i]->value);
	free(ht->array[i]);
	}
	ht->array[i] = newnode;
	return (1);
}
