#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
/**
 * _isnum - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @num: is a str
 * Return: just return 0 for ok
 */

bool _isnum(char *num)
{
int len = strlen(num);
int i;
for (i = 0; i < len ; i++)
{
if (!isdigit(num[i]))
	return (false);
}
return (true);
}

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
if (!_isnum(argv[i]))
{
printf("Error\n");
return (1);
}
res += atoi(argv[i]);
}
printf("%d\n", res);
return (0);
}
