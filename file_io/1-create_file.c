#include "main.h"

/**
 *create_file -  function that creates a file.
 *@filename: the name of the file
 *@text_content: the string terminated by null that we write in the file
 *Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int writing;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[count])
		count++;
	writing = write(file, text_content, count);
	if (writing == -1)
		return (-1);
	close(file);
	return (1);
}
