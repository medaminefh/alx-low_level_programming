#include "main.h"

/**
 * rev_string - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a pointer to a string
 * Return: just return 0 for ok
 */

void rev_string(char *s)
{
int i = 0;
int j = 0;

char a;
char b;

while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
a = s[j];
b = s[i];

s[j] = b;
s[i] = a;

i--;
j++;
}
}
