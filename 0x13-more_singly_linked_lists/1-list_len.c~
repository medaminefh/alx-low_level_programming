#include "lists.h"
#include <stdio.h>

/**
 * print_list - check the code
 * @h: is a list to be printed
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
int len = 0;
while (h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
		printf("[%d] %s\n", h->len, h->str);
len++;
h = h->next;
}
return (len);
}

