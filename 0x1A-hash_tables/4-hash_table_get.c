#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table.
 * @ht: Hash table to look into
 * @key: The key to look for
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
