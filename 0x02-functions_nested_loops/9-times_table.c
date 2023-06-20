#include "main.h"
/**
 * times_table - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */

void times_table(void)
{
int b;
int c;
int d;

for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 9; c++)
{
d = c * b;
if (d > 9)
{
_putchar(d / 10 + 48);
_putchar(d % 10 + 48);
}
else
{
_putchar((c * b) + 48);
}
if (c != 9)
{
_putchar(44);
_putchar(' ');
}
}
_putchar('\n');
}
}
