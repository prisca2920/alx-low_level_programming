#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
