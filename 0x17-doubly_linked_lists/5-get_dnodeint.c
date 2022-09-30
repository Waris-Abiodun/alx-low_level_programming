#include "main.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int node = 0;
	while(head != NULL)
	{
		if (node == index)
			return (head->n);
		head = head->next;
		node++;
	}
	return (NULL);
}
