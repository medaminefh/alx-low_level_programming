#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings - prints a name as is
 * @separator: ...
 * @n: name of the number of args
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
	char *x = va_arg(args, char *);

	if (separator == NULL)
	{
		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);
	}
	else
	{
	if (x == NULL)
		printf("nil");
	else
	{
	printf("%s", x);
	if (i + 1 != n)
		printf("%s", separator);
	}
	}
}
va_end(args);
printf("\n");
}
