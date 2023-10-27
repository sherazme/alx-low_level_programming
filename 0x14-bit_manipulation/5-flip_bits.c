#include "main.h"

/**
 * flip_bit - flip bit
 * @n: number
 * @m: number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}
