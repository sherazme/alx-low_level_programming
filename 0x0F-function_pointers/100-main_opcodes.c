#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte, i = 0;
	unsigned char *func;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func = (unsigned char *)main;

	if (byte > 0)
	{
		while (i < byte--)
			printf("%02hhx ", func[i++]);
		printf("%hhx\n", func[i]);
	}
	return (0);
}
