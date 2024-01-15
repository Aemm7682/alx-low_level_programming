#include "lists.h"
/**
 * sum_dlistint - summation of all value
 * @head: poibter to the current node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
