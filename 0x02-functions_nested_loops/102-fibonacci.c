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
long int a = 1;
long int b = 2;
int i;
long int sum = 0;
printf("%d, %d, ", 1, 2);
for (i = 0; i < 48; i++)
{
sum = a + b;
if (i == 47)
{
printf("%ld", sum);
}
else
	printf("%ld, ", sum);
a = b;
b = sum;
}
printf("\n");
return (0);
}
