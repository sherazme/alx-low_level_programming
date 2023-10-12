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
	int n, i;
	char *a = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
