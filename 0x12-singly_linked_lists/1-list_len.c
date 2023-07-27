#include "lists.h"

/**
 * list_len - check the code
 * @h: is a list to be printed
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
int len = 0;
while (h)
{
len++;
h = h->next;
}
return (len);
}

