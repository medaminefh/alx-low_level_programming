#include "main.h"

/**
 * print_chessboard - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @a: is an array
 * Return: just return 0 for ok
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;
while (i < 8)
{
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
j = 0;
_putchar('\n');
i++;
}
}
