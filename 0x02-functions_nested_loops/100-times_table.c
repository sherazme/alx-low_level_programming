#include "main.h"

/**
 * print_times_table - Check description
 * @n: num
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j;
	
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				n = i * j;

				if ((n / 10) == 0)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(n + '0');
					}

					if (j == 9)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					if (j == 9)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
