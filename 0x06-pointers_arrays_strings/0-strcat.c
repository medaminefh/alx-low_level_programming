#include "main.h"

/**
 * _strcat - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @dest: is a pointer to a string
 * @src: is a pointer to a str
 * Return: just return 0 for ok
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)

for (b = 0; src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
dest[a + b] = '\0';
}
return (0);
}
