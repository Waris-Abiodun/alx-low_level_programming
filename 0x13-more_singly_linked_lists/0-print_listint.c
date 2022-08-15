#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - a function that pint the data in the node
 * @h: nodes to be passed
 * Return: the number ofnodes we printed
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
