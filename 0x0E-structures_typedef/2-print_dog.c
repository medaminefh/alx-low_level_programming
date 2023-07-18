#include "dog.h"
#include <stdio.h>
#include <stddef.h>

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
if (d != NULL)
{
if (d->name != NULL)
	printf("Name: %s\n", d->name);
else
	printf("Name: (nil)");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
	printf("Owner: %s\n", d->owner);
else
	printf("Owner: (nil)");
}
}
