#include <stdio.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Description: prints file name
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc);
	return (0);
}
