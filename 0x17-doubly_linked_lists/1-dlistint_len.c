#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that count the number of nodes
 * @h: the head or begining of the node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
