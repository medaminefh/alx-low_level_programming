#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @s: is a string
 * Return: return an int
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
int i = 0;
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
	return (ops[i].f);
i++;
}
return (0);
}
