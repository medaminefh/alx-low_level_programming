#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is of type int
 * Return: just return 0 for ok
 */

void print_to_98(int n)
{
while (n != 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else
{
printf("%d, ", n);
n++;
}
}
printf("%d\n", 98);
}
