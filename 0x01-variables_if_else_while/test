#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num, num1, num2, num3;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 <= 8; num1++)
		{
			for (num2 = 0; num2 < 10; num2++)
			{
				for (num3 = 0; num3 < 10; num3++)
				{
					putchar(num + 48);
					putchar(num1 + 48);
					putchar(' ');
					putchar(num2 + 48);
					putchar(num3 + 48);
					if (num == 9 && num1 == 8 && num2 == 9 && num3 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
