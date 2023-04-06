#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size of array in the hash table structure
 * Return: Structure of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (!size)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(sizeof(hash_node_t *), hash_table->size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
