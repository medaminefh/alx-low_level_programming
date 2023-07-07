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
if (argc < 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
