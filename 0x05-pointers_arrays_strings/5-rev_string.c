#include "main.h"
/**
 * rev_string - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a pointer to a string
 * Return: just return 0 for ok
 */

void rev_string(char *s)
{
int curr = 0;
while (s[curr] != '\0')
{
curr++;
}
while (curr > 0)
{
_putchar(s[curr - 1]);
curr--;
}
_putchar('\n');
}
