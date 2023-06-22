#include "main.h"
/**
 * more_numbers - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
void more_numbers(void)
{
int a;
int i;
for (i = 0; i < 10; i++)
{
for (a = 48; a < 58; a++)
{
_putchar(a);
}
for (a = 48; a < 53; a++)
{
_putchar(49);
_putchar(a);
}
_putchar('\n');
}
}
