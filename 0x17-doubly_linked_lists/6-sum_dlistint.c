#include "lists.h"

/**
 * sum_dlistint - a function that sum the value of the nodes
 * @head: the nodes to add
 * Return: the sum of nodes and zero if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
