#include "main.h"
/**
 * jack_bauer - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */

void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;

for (h1 = 0; h1 <= 2; h1++)
{
for (h2 = 0; h2 <= 9; h2++)
{
for (m1 = 0; m1 <= 5; m1++)
{
for (m2 = 0; m2 <= 9; m2++)
{
if (h1 >= 2 && h2 >= 4)
{
break;
}
_putchar(h1 + 48);
_putchar(h2 + 48);
_putchar(58);
_putchar(m1 + 48);
_putchar(m2 + 48);
_putchar('\n');
}
}
}
}
}
