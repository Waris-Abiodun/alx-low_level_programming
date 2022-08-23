#include "main.h"

/**
 * read_textfile - a function that print texts out base on number of lines
 * @filename : this will pass the letter we want o print
 * @letters :max number of letter we can print
 * Return: The number of character to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t noRead;
	ssize_t noWrite;
	int fd;
	char *buff;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	noWrite = write(fd, buff, letters);
	noRead = read(STDOUT_FILENO, buff, noWrite);
	close(fd);

	free(buff);

	return (noRead);
}
