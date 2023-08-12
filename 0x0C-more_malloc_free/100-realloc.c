#include "main.h"
/**
 * *_realloc - function
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned i;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new _size);
		if (p == NULL)
			reurn (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_sie);
		if (p == NULL)
			return (NULL);
		for (i = 0 ; i < old_size && i < new_size ; i++)
			*(char *p + i) = *(char *ptr + i);
		free(ptr);
	}
	return (p);
}
