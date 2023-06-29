#include "main.h"

/**
 * _strncpy - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @dest: is a pointer to a string
 * @src: is a pointer to a str
 * @n: is an int
 * Return: just return 0 for ok
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; (a < n && src[a] != '\0'); a++)
{
dest[a] = src[a];
}
for ( ; a < n; a++)
{
dest[a] = '\0';
}

return (dest);
}
