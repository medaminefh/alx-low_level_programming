#include "function_pointers.h"

/**
 * int_index - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @array: is an array of ints
 * @size: is the size of the array
 * @cmp: is a function pointer
 * Return: return an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
