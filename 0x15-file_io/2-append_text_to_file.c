#include "main.h"

size_t _strl(char *str);
/**
 * append_text_to_file - calculate
 * @filename: ...
 * @text_content: is a string
 * Return: value of base and power
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strl(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}

/**
 * _strl - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strl(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
