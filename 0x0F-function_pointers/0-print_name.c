#include "function_pointers.h"

/**
 * print_name - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @name: is a str
 * @f: is a funtion pointer
 * Return: just return 0 for ok
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
