#include "main.h"
/**
 * cap_string - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a str
 * Return: just return 0 for ok
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
char c[13] = " \t\n,;.!?\"(){}";
int j;
for (j = 0; j < 13; j++)
{
if (i == 0)
	str[0] = str[0] - 'a' + 'A';
if (i > 0 && str[i - 1] == c[j])
{
str[i] = str[i] - 'a' + 'A';
}
}
}
}
return (str);
}
