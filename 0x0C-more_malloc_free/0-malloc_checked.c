#include "main.h"
/**
 * malloc_checked - function
 * @b: variable
 * Return: return m
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(sizeof(int) * b);

	if (m == 0)
		exit(98);
	return (m);
}
