#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the name of the file should be created
 * @text_content: the content of the file
 * Return: 1 if all is good -1 if something faills (write or open)
 */

int create_file(const char *filename, char *text_content)
{
	int	fd;
	int	len;

	len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		if (!text_content)
			return (1);
		return (-1);
	}
	if (write(fd, text_content, len) < 0)
		return (-1);
	return (1);
}
