#include "lists.h"

/**
 * add_nodeint - a function pointer that print all the node in reverse order
 * @head: nodes that are passed as pointer
 * @n: integer to be printed
 * Return: node that are to be printed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
