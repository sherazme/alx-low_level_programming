#include "main.h"

/**
 * main - check the code
 * @ac: args num
 * @av: args array
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int source, destination, byteRead, byteWrite;
	char buffer[1024];

	if (ac != 3)
		exit_and_print("Usage: cp file_from file_to\n", av[0], 97);

	source = read_textfile(av[1], 114);
	if (source == -1)
		exit_and_print("Error: Can't read from file %s\n", av[1], 98);

	destination = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination == -1)
		exit_and_print("Error: Can't write to %s\n", av[2], 99);

	while ((byteRead = read(source, buffer, 1024)) > 0)
	{
		byteWrite = write(destination, buffer, byteRead);
		if (byteWrite == -1)
			exit_and_print("Error: Can't write to %s\n", av[2], 99);
	}

	if (byteRead == -1)
		exit_and_print("Error: Can't read from file %s\n", av[1], 98);

	if (close(source) == -1)
		exit_and_print_int("Error: Can't close fd %d\n", source, 100);

	if (close(destination) == -1)
		exit_and_print_int("Error: Can't close fd %d\n", destination, 100);
	return (0);

}

/**
 * exit_and_print - exit and print
 * @msg: message to be printed
 * @argument: av
 * @code: exit code
 * Return: void
 */

void exit_and_print(char *msg, char *argument, int code)
{
	dprintf(STDERR_FILENO, msg, argument);
	exit(code);
}

/**
 * exit_and_print - exit and print
 * @msg: message to be printed
 * @argument: av
 * @code: exit code
 * Return: void
 */

void exit_and_print_int(char *msg, int argument, int code)
{
	dprintf(STDERR_FILENO, msg, argument);
	exit(code);
}
