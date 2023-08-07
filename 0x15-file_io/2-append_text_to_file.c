#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a given file
 * @filename: the name of the file
 * @text_content: the text shoule be appended
 * Return: 1 if all is good and -1 if something fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int	fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content && fd > 0)
		return (1);
	if (write(fd, text_content, strlen(text_content)) < 0)
		return (-1);
	return (1);
}
