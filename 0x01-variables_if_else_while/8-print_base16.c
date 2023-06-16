#include <stdio.h>
/**
 * main - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
int main(void)
{
int a = 48;
int b = 97;
while (a < 58)
{
putchar(a);
a++;
}
while (b < 103)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
