#include "main.h"
/**
 * create_file - creat a file
 * @filename: name of the created file
 * @text_content: text to write
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		len = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
