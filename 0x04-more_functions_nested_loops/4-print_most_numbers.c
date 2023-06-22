#include <stdio.h>
/**
 * print_most_numbers - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
void print_most_numbers(void)
{
int a = 48;
while (a < 58)
{
if (a == 50 || a == 52)
{
continue;
}
putchar(a);
a++;
}
putchar('\n');
return (0);
}
