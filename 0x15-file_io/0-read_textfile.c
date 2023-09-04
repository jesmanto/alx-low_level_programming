#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a file and prints out to stdout
 * @filename: name of text file that should be read
 * @letters: number of characters
 * Return: actual number of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buf = malloc(sizeof(char) * letters);
	int actual_len = 0;

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	actual_len = read(file_d, buf, letters);
	write(STDOUT_FILENO, buf, actual_len);

	free(buf);
	close(file_d);
	return (actual_len);
}
