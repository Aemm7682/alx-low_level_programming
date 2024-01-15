#include "lists.h"
/**
 * add_dnodeint - add new head node
 * @n: field of new node
 * @head: the first node
 * Return: to return the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		if (new_node)
		{
			free(new_node);
		}
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
