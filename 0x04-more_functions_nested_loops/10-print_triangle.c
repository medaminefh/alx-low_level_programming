#include "main.h"
/**
 * print_triangle - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @size: is an int
 * Return: just return 0 for ok
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
int c;
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar('.');
}
for (c = 0; c < i; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
