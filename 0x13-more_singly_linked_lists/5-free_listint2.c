#include "lists.h"
#include <stdlib.h>


/**
 * free_listint2 - check the code
 * @head: is a list to be printed
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
listint_t *tmp = *head;
listint_t *b;
while (tmp->next)
{
	b = tmp;
	tmp = tmp->next;
	free(b);
}
free(tmp);
*head = NULL;
}
