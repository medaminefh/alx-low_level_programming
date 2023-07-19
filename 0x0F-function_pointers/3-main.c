#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: is the size of array of arguments
 * @argv: is the array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*a)(int, int);
char *b;
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
a = get_op_func(argv[2]);
if (!a)
{
	printf("Error\n");
	exit(99);
}
b = argv[2];
if ((strcmp(b, "%") == 0 || strcmp(b, "/") == 0) && atoi(argv[3]) == 0)
{
	printf("Error\n");
	exit(100);
}
printf("%d\n", a(atoi(argv[1]), atoi(argv[3])));
return (0);
}
