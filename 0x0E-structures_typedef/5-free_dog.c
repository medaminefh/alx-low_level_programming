#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @d: is of type dog_t
 * Return: just return 0 for ok
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
