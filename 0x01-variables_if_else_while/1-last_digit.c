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
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
}
else
printf("Last digit of %i is %i and is 0\n", n, last_digit);
return (0);
}
