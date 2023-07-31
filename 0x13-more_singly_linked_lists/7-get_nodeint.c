#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * *get_nodeint_at_index - check the code
 * @head: is a list to be printed
 * @index: is a string
 * Return: Always 0.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp;

temp = head;
while (temp)
{
	if (i == index)
		return (temp);
	temp = temp->next;
	i++;
}
return (NULL);
}
