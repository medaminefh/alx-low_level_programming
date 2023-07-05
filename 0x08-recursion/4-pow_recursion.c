#include "main.h"

/**
 * _pow_recursion - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @x: is an int
 * @y: is an int
 * Return: just return 0 for ok
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1);
}
}
