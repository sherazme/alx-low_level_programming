#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file to append
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
 
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, byteWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_ APPEND | O_EXCL, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		byteWrite = write(fd, text_content, _strlen(text_content));
		if (byteWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
