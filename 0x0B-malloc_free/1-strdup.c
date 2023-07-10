#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @str: is a string
 * Return: just return 0 for ok
 */

char *_strdup(char *str)
{
char *s;
int len = 0;
int i = 0;
if (str == NULL)
	return (NULL);
while (str[len] != '\0')
{
len++;
}
s = malloc(sizeof(char) * len + 1);
if (s == NULL)
	return (NULL);
while (i < len)
{
s[i] = str[i];
i++;
}
s[len] = '\0';
return (s);
}
