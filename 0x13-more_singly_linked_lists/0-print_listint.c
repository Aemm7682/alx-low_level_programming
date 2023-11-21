#include "lists.h"
/**
 * print_listint - function to print linked list
 * @h: first node pointer
 * Return: the size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
