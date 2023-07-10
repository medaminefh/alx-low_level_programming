#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s1: is a string
 * @s2: is a string
 * Return: just return 0 for ok
 */

char *str_concat(char *s1, char *s2)
{
char *s;
int i;
int j;
int a = 0;
int b = 0;
if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
{}

}
if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++)
{}
s = malloc(sizeof(char) * (i + j) + 1);
}
if (s == NULL)
	return (NULL);
s[i + j + 1] = '\0';
if (s1 != NULL)
{
while (a < i)
{
s[a] = s1[a];
a++;
}
}
if (s2 != NULL)
{
while (b < j)
{
s[a + b] = s2[b];
b++;
}
}
return (s);
}
