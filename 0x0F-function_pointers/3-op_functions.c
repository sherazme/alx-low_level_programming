#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add function
 * @a: first number
 * @b: second number
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - mul function
 * @a: first number
 * @b: second number
 * Return: multi
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - sub function
 * @a: first number
 * @b: second number
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - div function
 * @a: first number
 * @b: second number
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod function
 * @a: first number
 * @b: second number
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
