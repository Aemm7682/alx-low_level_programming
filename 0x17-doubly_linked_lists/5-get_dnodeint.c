 #include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the first node
 * @index: index of the returned node
 * Return: address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int z = 0;

	for (; head != NULL; head = head->next, z++)
		if (z == index)
			return (head);
	return (NULL);
}
