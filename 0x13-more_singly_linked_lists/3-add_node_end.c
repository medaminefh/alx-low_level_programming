#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * _strlen - length of a string
 * @str: is the string
 * Return: ....
 */

int _strlen(const char *str)
{
int i = 0;
while (str[i] != '\0')
	i++;
return (i);
}

/**
 * add_node_end - check the code
 * @head: is a list to be printed
 * @str: is a string
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
int len;
list_t *temp;
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
len = _strlen(str);
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
	return (new);
}
temp = *head;
while (temp->next)
	temp = temp->next;
temp->next = new;
return (new);
}
