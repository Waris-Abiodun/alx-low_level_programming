#include "lists.h"
/**
 * get_dnodeint_at_index - a function that find an index of node
 * @head: the head of the node
 * @index: the nth index we are loking for
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL)
	{
		if (node == index)
			return (head);
		head = head->next;
		node++;
	}
	return (NULL);
}
