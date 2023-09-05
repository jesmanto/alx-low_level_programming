#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * _len - computes length of string
 * @str: str to compute
 * Return: length of string
 */
int _len(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to append to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = _len(text_content);;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);
	if (text_content)
		write(fd, text_content, len);
	close(fd);
	return (1);
}
