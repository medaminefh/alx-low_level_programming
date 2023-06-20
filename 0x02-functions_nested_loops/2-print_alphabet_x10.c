#include "main.h"

/**
 * print_alphabet_x10 - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
void print_alphabet_x10(void)
{
int i = 0;
int j = 97;
while (i < 10)
{
while (j < 123)
{
_putchar(j);
j++;
}
j = 97;
_putchar('\n');
i++;
}
}
