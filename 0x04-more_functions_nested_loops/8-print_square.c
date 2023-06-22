#include "main.h"
/**
 * print_square - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @size: is an int
 * Return: just return 0 for ok
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
