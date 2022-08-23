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

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close (fd);
		return (0);
	}

	noWrite = write(fd, buff, letters);
	close (fd);
	if (noWrite == -1)
	{
		free (buff);
		return (0);
	}
	noRead = read(STDOUT_FILENO, buff, noWrite);

	free(buff);
	if (noRead != noWrite)
		return (0);

	return (noRead);
}
