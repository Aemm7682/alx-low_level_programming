#include "main.h"
/**
 * malloc_checked - function
 * @b: variable
 * Return: return m
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
