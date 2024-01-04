#include "main.h"
/**
 * main - function that copy the content of a file to another
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, n;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n = read(fd1, buff, 1024)) > 0)
	{
		if ((write(fd2, buff, n)) != n || fd2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);

		}
	}
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
