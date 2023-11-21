#include "lists.h"
/**
 * listint_len - only give the size
 * @h: head pointer
 * Return: to return the size
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
