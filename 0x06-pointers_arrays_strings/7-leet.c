#include "main.h"
/**
 * leet - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: string
 * Return: just return 0 for ok
 */
char *leet(char *str)
{
char a[] = "AaEeOoTtLl";
char b[] = "4433007711";
int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
}
}
}
return (str);
}
