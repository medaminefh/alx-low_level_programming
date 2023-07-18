#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @d: is of type dog
 * Return: just return 0 for ok
 */

void print_dog(struct dog *d)
{
if (d)
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
