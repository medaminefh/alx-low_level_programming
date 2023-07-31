#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_nodeint - check the code
 * @head: is a list to be printed
 * @n: is an int
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}

