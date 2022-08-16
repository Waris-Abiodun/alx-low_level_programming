#include "lists.h"

/**
 * free_listint - to check if memory are manage effectively
 * @head: node pointer
 */
void free_listint(listint_t *head)
{
	listint_t *node = head;


	while  ((node = head) != NULL)
	{
		node = node->next;
		free(node);
	}

}
