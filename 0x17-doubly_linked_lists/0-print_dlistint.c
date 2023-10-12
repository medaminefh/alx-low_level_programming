#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements of a linked list
 * @h: the head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
