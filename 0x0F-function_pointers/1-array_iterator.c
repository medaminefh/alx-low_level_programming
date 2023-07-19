#include "function_pointers.h"

/**
 * array_iterator - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @array: is an array of ints
 * @size: is the size of the array
 * @action: is a function pointer
 * Return: return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
	action(array[i]);
}
