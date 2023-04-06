#include "hash_tables.h"
/**
 * hash_table_get - get the vaue of a given key in a hash table
 * @ht: hash table
 * @key: key
 * Return: value (key match) or NULL (No key match)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (!(strcmp(current->key, key)))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
