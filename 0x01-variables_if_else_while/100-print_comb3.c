#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num, num1;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 <= 9; num1++)
		{
			putchar(num + 48);
			putchar(num1 + 48);
			if (num == 8 && num1 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
