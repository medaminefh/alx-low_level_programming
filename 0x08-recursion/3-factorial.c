#include "main.h"

/**
 * factorial - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is an int
 * Return: just return 0 for ok
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
	return (n * factorial(n - 1));
}
