#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 * Return: just return 0 for ok
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i, name_length, owner_length;
dog_t *dog;
if (name == NULL || owner == NULL)
	return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
for (name_length = 0; name[name_length] != '\0'; name_length++)
{}
name_length++;
dog->name = malloc(sizeof(char) * name_length);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < name_length; i++)
{
dog->name[i] = name[i];
}
for (owner_length = 0; owner[owner_length]; owner_length++)
{}
owner_length++;
dog->owner = malloc(sizeof(char) * owner_length);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < owner_length; i++)
{
dog->owner[i] = owner[i];
}
dog->age = age;
return (dog);
}
