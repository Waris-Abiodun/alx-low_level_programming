#include "lists.h"
#include <stdio.h>

/**
* list_len - prints all elements
* @h: pointer
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list *c = h;

	while (c != NULL)
	{
		c = c->next;
		nodes++;
	}
	return (nodes);
}
