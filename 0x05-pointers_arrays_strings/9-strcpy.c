#include <stdio.h>
/**
 * *_strcpy - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @dest: is a pointer to a string
 * @src: is a pointer
 * Return: just return 0 for ok
 */

char *_strcpy(char *dest, char *src)
{

int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (dest);
}
