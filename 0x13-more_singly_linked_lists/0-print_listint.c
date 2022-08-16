#include "lists.h"

/**
 * print_listint - a function that pint the data in the node
 * @h: nodes to be passed
 * Return: the number ofnodes we printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *k;
	size_t node = 0;

	k = malloc(sizeof(listint_t));
	k = h;
	while (k != NULL)
	{
		printf("%d\n", k->n);
		k = k->next;
		node++;
	}
	return (node);
}