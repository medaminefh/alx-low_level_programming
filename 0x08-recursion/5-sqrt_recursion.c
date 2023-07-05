#include "main.h"

/**
 * helper - This is a helper function
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @i: is an int
 * @n: is an int
 * Return: just return 0 for ok
 */
int helper(int n, int i)
{
if (n < 0 || i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
return (helper(n, i + 1));
}
}

/**
 * _sqrt_recursion - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is an int
 * Return: just return 0 for ok
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (helper(n, 0));
}
}
