#include <stdio.h>
/**
 * print_array - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @a: is a pointer to a string
 * @n: is a pointer
 * Return: just return 0 for ok
 */

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i + 1 < n)
{
printf("%d, ", a[i]);
}
else
	printf("%d\n", a[i]);
}
}
else
	printf("\n");
}
