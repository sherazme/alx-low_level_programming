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

	for (; n <= 98; n++)
	{
		_putchar(n + '0');
		if (n == 98)
			continue;
		_putchar(',');
		_putchar(' ');
	}
}
