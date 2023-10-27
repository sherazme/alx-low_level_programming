#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
