#include "hash_tables.h"
/**
 * hash_table_create - to create hash table and intiate with zero
 * @size: is the size of the hash table
 * Return: return null if not allocate or return 1 if allocate
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
