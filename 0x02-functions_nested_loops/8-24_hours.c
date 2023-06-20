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
char i[2] = '00';
char j[2] = '00';

while(i <= '23')
{
while(j <= '59')
{
_putchar(i);
_putchar(':');
_putchar(j);
j++;
}
i++;
}
}
