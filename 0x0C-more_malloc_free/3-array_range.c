#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @min: is an int
 * @max: is an int
 * Return: just return 0 for ok
 */
int *array_range(int min, int max)
{
int i = 0;
int *s;
if (min > max)
	return (NULL);

s = malloc(sizeof(int) * (max - min + 1));
if (s == NULL)
	return (NULL);
while (min <= max)
{
s[i] = min;
min++;
i++;
}
return (s);
}
