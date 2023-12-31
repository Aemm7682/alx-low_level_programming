#include "main.h"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - main entery
 * @ac: argument counter
 * @av: argument vector
 * Return: 1 success and 0 fail
 */
int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	int close_from, close_to;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(from_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	close_from = close(from_fd);
	close_to = close(to_fd);
	if (close_from == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (close_to == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
	return (EXIT_SUCCESS);
}
