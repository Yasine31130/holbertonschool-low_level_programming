#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file
 *@text_content: null terminated striing to add at the end
 *Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writ, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		writ = write(file, text_content, i);
		if (writ == -1)
			return (-1);
	}
	close(file);
	return (1);
}
