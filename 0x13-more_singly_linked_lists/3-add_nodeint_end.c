#include "lists.h"

/**
 * add_nodeint_end -a function pointer that print all the node in reverse order
 * @head: nodes that are passed as pointer
 * @n: integer to be printed
 * Return: node that are to be printed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *order = *head;

	while (order && order->next != NULL)
		order = order->next;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (order != NULL)
	{
		order->next = node;
	}
	else
	{
		*head = node;
	}

	return (order);
}
