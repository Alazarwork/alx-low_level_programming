#include "hash_tables.h"
/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (comma)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			comma = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
