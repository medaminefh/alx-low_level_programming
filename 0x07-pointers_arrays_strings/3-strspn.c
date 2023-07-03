#include "main.h"

/**
 * _strspn - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a string
 * @accept: is a substring
 * Return: just return 0 for ok
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j = 0;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == accept[j])
{
return (s[i]);

}

}
return (NULL);
}
