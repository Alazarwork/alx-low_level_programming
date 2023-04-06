#include "hash_tables.h"
/**
 * hash_table_delete - Delete hash tables
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *next = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
