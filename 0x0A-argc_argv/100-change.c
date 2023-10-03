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
	int amount, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount <= 0)
	{
		printf("0\n");
		return (1);
	}
	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;

		else if (amount >= 10)
			amount -= 10;

		else if (amount >= 5)
			amount -= 5;

		else if (amount >= 2)
			amount -= 2;

		else if (amount >= 1)
			amount -= 1;

		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
