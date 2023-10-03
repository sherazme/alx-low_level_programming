#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Description: prints file name
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
		printf("0\n");
	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
