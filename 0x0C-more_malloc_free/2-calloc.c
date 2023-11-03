#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: is variable to start array
 * @size: is the size of the array
 * Return: to return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z == NULL)
		return (NULL);
	for (; i < (nmemb * size) ; i++)
		z[i] = 0;
	return (z);
}
