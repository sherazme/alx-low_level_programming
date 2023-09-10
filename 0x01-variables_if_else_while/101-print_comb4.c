#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num, num1, num2;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 <= 9; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				putchar(num + 48);
				putchar(num1 + 48);
				putchar(num2 + 48);
				if (num != 7 && num1 != 8 && num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
