#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - functions that append a text at the end of a file
 *
 * @filename: the name of the file
 *
 * @text_content: is the NULL
 *
 * Return: return 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, 0_RDWR | 0_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		write(file, text_content, len);
	}
	close(file);

	return (1);
}
