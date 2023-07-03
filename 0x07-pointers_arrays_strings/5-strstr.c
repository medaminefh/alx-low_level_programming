#include "main.h"
#include <stddef.h>
/**
 * _strstr - This will convert ascii number into char
(* a blank line
 * Description: by placing %c instead of %d, the number will be converted)?
(* section header: Section description)*
 * @haystack: is a string
 * @needle: is a substring
 * Return: just return 0 for ok
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
while (haystack[i] != '\0')
{
if (haystack[i] == needle[j])
	break;
i++;
}
while (haystack[i] == needle[j])
{
if (needle[j] == '\0')
	return (needle);
j++;
i++;
}
return (NULL);
}
