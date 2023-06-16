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
while (a < 58)
{
while (b < 58)
{
if (b >= a && b != a)
{
putchar(a);
putchar(b);
if (a <= 55 || b <= 55)
{
putchar(44);
putchar(' ');
}

}
b++;
}
b = 48;
a++;
}
putchar('\n');
return (0);
}
