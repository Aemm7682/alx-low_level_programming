#include "lists.h"
/**
 * print_dlistint - print the doubly list
 * @h: adress of the first node
 * Return: to return the list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t z;

	for (z = 0; h != NULL; h = h->next, z++)
		printf("%d\n", h->n);
	return (z);
}
