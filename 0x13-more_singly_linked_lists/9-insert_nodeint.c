#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * insert_nodeint_at_index - check the code
 * @head: is a list to be printed
 * @idx: is the index
 * @n: is the int
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = idx;
listint_t *current = *head;
listint_t *new = malloc(sizeof(listint_t));

if (new == NULL)
	return (NULL);

new->n = n;
new->next = NULL;

while (i > 1)
{
	current = current->next;
	i--;
}
new->next = current->next;
current->next = new;

return (new);
}
