#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @nmemb: is an int
 * @size: is an int
 * Return: just return 0 for ok
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
	return (NULL);

s = malloc(size * nmemb);
if (s == NULL)
	return (NULL);
while (i < (nmemb * size))
{
s[i] = 0;
i++;
}
return (s);
}
