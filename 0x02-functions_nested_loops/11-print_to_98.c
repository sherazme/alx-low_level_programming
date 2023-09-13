#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * @n: number
 * Return: 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 10)
				_putchar(n + '0');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		if  (n == 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			for (; n >= 98; n--)
			{
				else
				{
					_putchar((n / 100) + '0');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
				if (n == 98)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
}
