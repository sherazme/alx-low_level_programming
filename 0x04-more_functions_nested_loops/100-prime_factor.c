#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int num = 612852475143;

	for (i = 1; i <= num; i++)
	{
		while (num % i == 0 && num != i)
			num = num / i;
	}
	printf("%lu ", num);
	return (0);
}
