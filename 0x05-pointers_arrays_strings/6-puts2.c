#include "main.h"
/**
 * puts2 - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a pointer to a string
 * Return: just return 0 for ok
 */

void puts2(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
_putchar(str[j]);
j += 2;
}
_putchar('\n');
}
