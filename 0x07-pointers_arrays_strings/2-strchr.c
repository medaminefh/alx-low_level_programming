#include "main.h"
#include <stddef.h>

/**
* _strchr - This will convert ascii number into char
(* a blank line
* Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
* @s: is a string
* @c: is a char
* Return: just return 0 for ok
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
return (s);
s++;
}
return (NULL);
}
