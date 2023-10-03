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
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (1);
	}
	while (money > 0)
	{
		if (money >= 25)
			money -= 25;

		else if (money >= 10)
			money -= 10;

		else if (money >= 5)
			money -= 5;

		else if (money >= 2)
			money -= 2;

		else if (money >= 1)
			money -= 1;

		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
