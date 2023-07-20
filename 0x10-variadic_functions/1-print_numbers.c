#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - prints a name as is
 * @separator: ...
 * @n: name of the number of args
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
	unsigned int x = va_arg(args, unsigned int);

	if (separator == NULL)
		printf("%d", x);
	else
	{
	printf("%d", x);
	if (i + 1 != n)
		printf("%s", separator);
	}
}
va_end(args);
printf("\n");
}
