#include "main.h"

/**
 * string_toupper - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a str
 * Return: just return 0 for ok
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] = str[i] - 97 + 65;
}
}
return (str);
}
