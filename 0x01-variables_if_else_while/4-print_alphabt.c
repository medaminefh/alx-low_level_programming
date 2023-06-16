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
int a = 97;
while (a < 123)
{
if (a != 101 && a != 113)
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
