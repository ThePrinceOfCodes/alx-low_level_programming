#include "main.h"

/**
 * read_text_file - reads a text file and prints its content
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. return 0 if it fails.
 */
ssize_t read_text_file(const char *filename, ssize_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
