#include "lists.h"

/**
 * sum_dlistint - sum of n
 * @head: head
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int out = 0;

	while (head != NULL)
	{
		out += head->n;
		head = head->next;
	}
	return (out);
}
