#include "main.h"
/**
 * _strlen - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a pointer to a char
 * Return: just return 0 for ok
 */

int _strlen(char *s)
{
int curr = 0;
int count = 0;
while (s[curr] != '\0')
{
count++;
curr++;
}

return (count);
}
