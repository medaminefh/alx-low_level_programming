#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *create_file - calculate
 * @filename: ...
 * @text_content: is a string
 * Return: value of base and power
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
