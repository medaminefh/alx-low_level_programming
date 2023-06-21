#include <stdio.h>
#include "main.h"
/**
 * multiple - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */

void multiple(void)
{
int i;
int sum = 23;
for (i = 10; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}
