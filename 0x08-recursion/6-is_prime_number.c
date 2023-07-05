#include "main.h"

/**
 * helper - This is a helper function
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is an int
 * @i: is an int
 * Return: just return 0 for ok
 */

int helper(int n, int i)
{
if (i > 1 && i < n && n % i == 0)
{
return (0);
}
else if (i == n)
	return (1);
return (helper(n, i + 1));
}

/**
 * is_prime_number - This is a helper function
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is an int
 * Return: just return 0 for ok
 */



int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (helper(n, 1));
}
