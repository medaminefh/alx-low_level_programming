#include <stdio.h>
/**
 * main - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * Return: just return 0 for ok
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
if (i != 100)
	printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
if (i != 100)
	printf(" ");

}
else if (i % 5 == 0)
{
printf("Buzz");
if (i != 100)
	printf(" ");

}
else
printf("%d ", i);
}
printf("\n");
return (0);
}
