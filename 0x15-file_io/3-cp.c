#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * _filecpy - copies a file from one src to another dest
 * @dest: destination of cpy
 * @src: source of string
 */
void _filecpy(char *src, char *dest)
{
	int dest_fd, src_fd, _strlen;
	char buf[1024];

	src_fd = open(src, O_RDONLY);
	if (src == NULL || src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC);
	while ((_strlen = read(src_fd, buf, 1024)) > 0)
	{
		if (write(dest_fd, buf, _strlen) != _strlen || dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (_strlen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", src);
		exit(98);
	}
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: number of arguments in list
 * @argv: list of args
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	_filecpy(argv[1], argv[2]);
	exit(0);
}
