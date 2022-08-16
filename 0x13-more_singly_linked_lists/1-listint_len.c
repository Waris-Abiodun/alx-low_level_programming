#include "lists.h"

/**
 * listint_len - a function that return number of nodes
 * @h: nodes to be passed
 * Return: the number ofnodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
