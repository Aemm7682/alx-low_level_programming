#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: is the array size
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
