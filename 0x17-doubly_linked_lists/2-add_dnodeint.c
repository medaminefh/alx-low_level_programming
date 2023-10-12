#include "lists.h"

/**
 * add_dnodeint - add new head
 * @head: the head
 * @n: the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->prev = NULL;
	new_list->next = *head;
	*head = new_list;
	if (new_list->next != NULL)
		(new_list->next)->prev = new_list;
	return (new_list);
}
