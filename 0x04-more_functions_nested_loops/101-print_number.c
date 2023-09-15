#include "main.h"
void print_num(int num);

/**
 * print_number - a function that prints
 * @n: An input
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_num(n * -1);
	}
	else
		print_num(n);
}

/**
 * print_num - A function to priting n
 * @num: an input unsigned integer
 * Return: Nothing
 */
void print_num(int num)
{
	int i = 1000000;

	for (; i >= 1; i /= 10)
		if (num / i != 0)
		{
			_putchar((num / i) % 10 + '0');
		}
}
