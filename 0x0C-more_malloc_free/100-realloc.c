#include "main.h"
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @old_size: is the length of the old pointer
 * @new_size: is the length of the new pointer
 * @ptr: is the pointer
 * Return: to return the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *z;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		z = malloc(new_size);
		if (z == NULL)
			return (NULL);
		return (z);
	}
	if (new_size > old_size)
	{
		z = malloc(new_size);
		if (z == NULL)
			return (NULL);
		for (i = 0 ; i < old_size && i < new_size ; i++)
			*((char *)z + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (z);
}
