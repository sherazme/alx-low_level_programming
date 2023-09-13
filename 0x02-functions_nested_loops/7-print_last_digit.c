#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Check description
 * @n: number
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int print_last_digit(int n)
{
	int last;

	if (n > 0)
		last = n % 10;
	else
		if (n < 0)
			last = n % 10 * -1;
		else
			last = 0;
	last = last * 10 + last;
	return (last);
}
