#include "main.h"

/**
 * reverse_array - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @a: is an array of ints
 * @n: is an int
 * Return: just return 0 for ok
 */
void reverse_array(int *a, int n)
{
int i;
int l = n % 2 == 0 ? n / 2 : n / 2 + 1;
for (i = 0; i < l ; i++)
{
int tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
