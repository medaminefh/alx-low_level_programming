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
int i;
int res = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
