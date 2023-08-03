#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: is a char
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int j;
j = 0;
if (!b)
	return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
	return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
j <<= 1;
if (b[a] == '1')
	j += 1;
}
return (j);
}

