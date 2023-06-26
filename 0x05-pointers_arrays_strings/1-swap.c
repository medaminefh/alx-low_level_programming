#include "main.h"
/**
 * swap_int - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @a: is a pointer to an int
 * @b: is a pointer to an int
 * Return: just return 0 for ok
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
