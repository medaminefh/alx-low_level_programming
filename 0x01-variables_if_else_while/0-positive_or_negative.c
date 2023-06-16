#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This will return a random num
(* a blank line
 * Description: This fun will print out a random num each time it runs)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* rand fun generate a random num each time it runs */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
printf("%d is zero\n", n);
return (0);
}
