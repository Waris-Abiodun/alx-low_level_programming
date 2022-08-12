#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all elements
* @h: pointer
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	while (c != NULL)
	{
		char *b = char *b = c->str != NULL ? c->str : "(nil)";

		printf("[%d] %s\n", c->len, b);
		c = c->next;
		nodes++;
	}
	return (nodes);
}
