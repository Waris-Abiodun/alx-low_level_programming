#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that print a node from head to tail
 * @h: the head or begining of the node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
