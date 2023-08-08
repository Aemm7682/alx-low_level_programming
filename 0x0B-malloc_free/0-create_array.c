#include "main.h"
/**
 * create_array - create function
 * @size: variable
 * @c: variable
 * Return: return value
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
