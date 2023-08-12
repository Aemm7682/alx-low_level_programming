#include "main.h"
/**
 * *_memset - function
 * @s: pointer to put constant
 * @b: constant
 * @n: max byte use
 * Return: ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - put mem in array by malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(nmemb * sizeof(int));
	if (m == 0)
		return (NULL);
	_memset(m, 0, nmemb * sizeof(int));
	return (m);
}
