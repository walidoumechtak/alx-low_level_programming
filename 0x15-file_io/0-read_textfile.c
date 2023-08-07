#include "main.h"

/**
 * read_textfile - function that read from a file and print it
 * @filename: the name of the file should be opened
 * @letters: number of char should be readed and printed
 * Return: The actual numberr of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	r_res;
	char	*read_string;
	int	fd;
	ssize_t	wr;


	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	read_string = malloc(letters * sizeof(char));
	if (!read_string)
		return (0);
	r_res = read(fd, read_string, letters);
	if (r_res < 0)
		return (free(read_string), 0);
	wr = write(1, read_string, letters);
	if (wr < 0 || wr < r_res)
		return (free(read_string), 0);
	free(read_string);
	return (r_res);
}
