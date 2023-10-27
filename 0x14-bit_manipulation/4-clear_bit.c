#include "main.h"

/**
 * clear_bit - clear bit
 * @n: number
 * @index: index
 * Return: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	nsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
