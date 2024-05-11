#include "hash_tables.h"
/**
 * key_index - to get the index depend on the key hash
 * @key: is the key
 * @size: is the size of the array
 * Return: to return the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key) % size;
	return (index);
}
