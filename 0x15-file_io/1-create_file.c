#include "main.h"

/**
 * create_file - creates file
 * @filename: ...
 * @text_content: a null terminated string
 * Return: 1 for success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content[1] = '\0';

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	w = write(fd, text_content, (len));

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
