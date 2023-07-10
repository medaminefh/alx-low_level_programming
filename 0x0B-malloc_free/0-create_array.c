#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @size: is an int
 * @c: is a char
 * Return: just return 0 for ok
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
	return (NULL);
char *str = malloc(sizeof(char) * size);
if (str == NULL)
	return (NULL);
return (str);
}
