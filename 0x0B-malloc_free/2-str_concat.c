#include"main.h"
#include<stdlib.h>

/**
* *str_concat - This will convert ascii number into char
(*a blank line
* Description: by placing %c instead of %d, the number will be converted)?
(*section header: Section description)*
* @s1: is a string
* @s2: is a string
* Return: just return 0 for ok
*/

char *str_concat(char *s1, char *s2)
{
int i, j, a, b, len;
char *s;
a = b = 0;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
	a++;
}

if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
	b++;
}

len = a + b;
s = malloc(sizeof(char) * (len + 1));
if (s == NULL)
	return (NULL);

for (i = 0; i < a; i++)
	s[i] = s1[i];
for (j = 0; j < b; j++, i++)
	s[i] = s2[j];
s[len] = '\0';

return (s);
}
