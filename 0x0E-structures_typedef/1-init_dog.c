#include "dog.h"

/**
 * init_dog - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @d: is an int
 * @name: is a char
 * @age: is a float
 * @owner: is a char
 * Return: just return 0 for ok
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
