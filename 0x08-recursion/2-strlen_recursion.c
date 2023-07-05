#include "main.h"

/**
 * _strlen_recursion - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a string
 * Return: just return 0 for ok
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s)
{
count++;
count += _strlen_recursion(s + 1);
}
return (count);
}
