#include "lists.h"
/**
 * dlistint_len - return the length of the d-list
 * @h: the first node
 * Return: length or size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t z = 0;

	for (; h != NULL; h = h->next, z++)
		;
	return (z);
}
