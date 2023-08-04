#include "main.h"

/**
 * flip_bits - is the func name
 * @n: is an int
 * @m: is another int
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, res;
	unsigned int j, i;

	j = 0;
	res = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (d & res))
			j++;
		res <<= 1;
	}

	return (j);
}
