#include "main.h"

/**
 * create_file - create text file
 * @filename: file to create
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, byteWrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		byteWrite = write(fd, text_content, _strlen(text_content));
		if (byteWrite == -1)
		{
			close (fd)
			return (-1);
		}
	}

	close(fd);
	return (byteWrite);
}

/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String.
 *
 * Return: Lenght of str.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
