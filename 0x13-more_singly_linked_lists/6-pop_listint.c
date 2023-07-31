#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - check the code
 * @head: is a list to be printed
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
int n;
if (head == NULL || *head == NULL)
	return (0);

n = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (n);
}
