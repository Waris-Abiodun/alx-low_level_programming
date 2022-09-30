#include "lists.h"

/**
 * free_dlistint - a function that free nallocated memory for nodes
 * @head: the head of the node
 */
void free_dlistint(dlistint_t *head)
{

	while(head != NULL)
	{
		free(head);
		head = head->next;
	}
}
