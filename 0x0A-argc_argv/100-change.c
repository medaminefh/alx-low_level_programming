#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @argc: is an int
 * @argv: is an array of str
 * Return: just return 0 for ok
 */
int main(int argc, char *argv[])
{
int res = 0;
int num;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (0);
}
num = atoi(argv[1]);
while (num > 0)
{
if (num >= 25)
{
res += num / 25;
num -= 25;
}
else if (num >= 10)
{
res += num / 10;
num -= 10;
}
else if (num >= 5)
{
res += num / 5;
num -= 5;
}
else if (num >= 2)
{
res += num / 2;
num -= 2;
}
else
{
res += num;
num -= num;
}
}
printf("%d\n", res);
return (0);
}
