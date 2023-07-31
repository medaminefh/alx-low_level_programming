#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * delete_nodeint_at_index - check the code
 * @head: is a list to be printed
 * @index: is the index
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = index;
listint_t *current = *head;
listint_t *temp = NULL;

if (current == NULL)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(current);
	return (1);
}
while (i > 1)
{
current = current->next;

i--;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
