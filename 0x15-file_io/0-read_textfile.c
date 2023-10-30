#include "main.h"

/**
 * read_textfile - read text file
 * @filename: file to read from
 * @letter: number of letters it should read and print
 * Returns: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, byteRead, byteWrite;
	char *buffer;
	
	if (filename == NULL)
		return (0);
	
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	byteRead = read(fd, buffer, letters);
	byteWrite = write(STDOUT_FILENO, buffer, byteRead);

	free(buffer);

	if (fd == -1 || byteRead == -1 || byteWrite == -1)
		return (0);

	close(fd);
	return (byteWrite);
}
