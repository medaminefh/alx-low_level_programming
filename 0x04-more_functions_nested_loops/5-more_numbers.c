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
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar((a / 10) + 48);
}
_putchar((a % 10) + 48);
}
_putchar('\n');
}
}
