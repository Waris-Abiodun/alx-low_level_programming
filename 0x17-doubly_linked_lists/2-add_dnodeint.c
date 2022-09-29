#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function pointer that add new nodes
 * @head: a pointer that point to an address to a pointer that point to struct
 * @n: new data to be added to our nodes
 * Return: return the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (0);
	}

	new->n = n;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
