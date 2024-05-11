#include "hash_tables.h"
/**
 * hash_table_set - to set the value of the hash table
 * @key: is the key value
 * @value: is the value
 * @ht: is the hash table
 * Return: 0 if fail and 1 if pass
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;

	index = key_index((unsigned char *)key, ht->size);
	if (!ht || !key || strlen(key) == 0 || ht->size == 0 || !value)
		return (0);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
