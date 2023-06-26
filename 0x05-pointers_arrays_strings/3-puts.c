#include "main.h"
/**
 * _puts - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a pointer to a string
 * Return: just return 0 for ok
 */

void _puts(char *str)
{
int curr = 0;
while (str[curr] != '\0')
{
_putchar(str[curr]);
curr++;
}
_putchar('\n');
}
