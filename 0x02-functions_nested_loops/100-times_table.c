#include <stdio.h>
#include "main.h"
/**
 * helperfunc - This is a helper func
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is a number
 * Return: just return 0 for ok
 */

void helperfunc(int n)
{
int b;
int c;
for (b = 1; b <= n; b++)
{
for (c = 0; c <= n; c++)
{
if ((b == n && c == n) || c > 0)
{
if (b * c > 99)
{
printf(", %d", b * c);
}
else if (b * c > 9)
{
printf(",  %d", b * c);
}
else
	printf(",   %d", b * c);
}
else
{
printf("%d", b * c);
}
}
printf("\n");
}
}

/**
 * print_times_table - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @n: is a number
 * Return: just return 0 for ok
 */

void print_times_table(int n)
{
int i;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)/* 1st row is zeros */
{
if (i == 0)
{
printf("%d", 0);
}
else
{
printf(",   %d", 0);
}
}
printf("\n");
helperfunc(n);
}
}
