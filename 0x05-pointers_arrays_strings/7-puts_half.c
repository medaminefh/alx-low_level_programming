#include "main.h"
/**
 * puts_half - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a pointer to a string
 * Return: just return 0 for ok
 */

void puts_half(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
j = i % 2 == 0 ? i / 2 : (i + 1) / 2;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
