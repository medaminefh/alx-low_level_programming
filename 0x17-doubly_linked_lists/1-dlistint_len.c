#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - length of the linked list
 * @h: head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
