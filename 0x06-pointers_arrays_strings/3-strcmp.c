#include "main.h"

/**
 * _strcmp - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s1: is a pointer to a string
 * @s2: is a pointer to a str
 * Return: just return 0 for ok
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
	return (0);
i++;
}
return (s1[i] - s2[i]);
}
