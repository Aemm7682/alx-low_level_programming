#include "lists.h"
/**
 * add_dnodeint_end - add node in the end of linked list
 * @head: the first node
 * @n: new node poistion
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	if (!head || !new_node)
	{
		if (new_node)
		{
			free(new_node);
		}
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
