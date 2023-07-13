#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @b: is an int
 * Return: just return 0 for ok
 */
void *malloc_checked(unsigned int b)
{
unsigned int *s;
s = malloc(sizeof(b));
if (s == NULL)
{
exit(98);
}
else
	return (s);
}
