#include <stdio.h>
int is_divided(int num, int div);
/**
 * is_prime_number - function
 * @n: value
 * Return: Always 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divided(n, div));
}

/**
 * is_divided - check num
 * @num: number
 * @div: result
 * Return: 1
 */
int is_divided(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divided(num, div + 1));
}
