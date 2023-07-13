#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s1: is a char
 * @s2: is a char
 * @n: is an int
 * Return: just return 0 for ok
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a = 0;
unsigned int b = 0;
unsigned int i = 0;
unsigned int j = 0;
char *s;
if (s1 != NULL)
{
while (s1[a] != '\0')
	a++;
}
if (s2 != NULL)
{
while (s2[b] != '\0')
	b++;
}
if (b > n)
	b = n;
s = malloc(sizeof(char) * (a + b + 1));
if (s == NULL)
	return (NULL);
while (i < a)
{
	s[i] = s1[i];
	i++;
}

while (j < b)
{
s[i] = s2[j];
j++;
i++;
}
return (s);
}
