#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the ht
 * @ht: the hash table you want to add or update the key
 * @key: the key
 * @value: the value associated with the key.
 * Return: the new node
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
