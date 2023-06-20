#include "main.h"
/**
 * print_last_digit - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @c: is of type int
 * Return: just return 0 for ok
 */

int print_last_digit(int c)
{
if (c >= 0)
{
return (c % 10);
}
return ((c * -1) % 10);
}
