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
int b = 48;
int c = 48;
while (a < 58)
{
while (b < 58)
{
while (c < 58)
{
if (b > a && c > b)
{
putchar(a);
putchar(b);
putchar(c);
if (c < 55 || b < 55 || a < 55)
{
putchar(44);
putchar(' ');
}
}
c++;
}
c = 48;
b++;
}
b = 48;
a++;
}
putchar('\n');
return (0);
}
