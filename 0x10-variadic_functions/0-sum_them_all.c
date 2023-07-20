#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - prints a name as is
 * @n: name of the number of args
 *
 * Return: Nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;
va_list args;
if (n == 0)
	return (0);

va_start(args, n);
for (i = 0; i < n; i++)
	sum += va_arg(args, unsigned int);
va_end(args);
return (sum);
}
