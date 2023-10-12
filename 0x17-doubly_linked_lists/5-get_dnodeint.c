#include "lists.h"

/**
 * get_dnodeint_at_index - search a node in the list
 * @head: head
 * @index: index of the node to retrieve
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
