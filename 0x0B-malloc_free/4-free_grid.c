#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @width: is the size of the array
 * @height: is the height of the array
 * Return: just return 0 for ok
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i;
int j;
if (width <= 0 || height <= 0)
	return (NULL);
arr = (int **)malloc(sizeof(int *) * height);
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
while (i - 1 >= 0)
{
free(arr[i]);
i--;
}
free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
	arr[i][j] = 0;
}
return (arr);
}
