#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * sum_listint - check the code
 * @head: is a list to be printed
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
unsigned int i = 0;

while (head)
{
	i += head->n;
	head = head->next;
}
return (i);
}
