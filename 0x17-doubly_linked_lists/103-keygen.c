#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * biggest - find biggest number
 * @username: username
 * @len: length of username
 * Return: biggest number
 */
int biggest(char *username, int len)
{
	int point = *username, vpoint = 0;
	unsigned int rand_num;

	while (vpoint < len)
	{
		if (point < username[vpoint])
			point = username[vpoint];
		vpoint += 1;
	}

	srand(point ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multi - multiplies eapoint char of username
 * @username: username
 * @len: length of username
 *
 * Return: multiplied char
 */
int multi(char *username, int len)
{
	int point;
	int vpoint;

	point = vpoint = 0;

	while (vpoint < len)
	{
		point = point + username[vpoint] * username[vpoint];
		vpoint += 1;
	}

	return (((unsigned int)point ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @username: username
 * Return: a random char
 */
int f6(char *username)
{
	int point;
	int vpoint;

	point = vpoint = 0;

	while (vpoint < *username)
	{
		point = rand();
		vpoint += 1;
	}

	return (((unsigned int)point ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, point, vpoint;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	point = vpoint = 0;
	while (vpoint < len)
	{
		point = point + argv[1][vpoint];
		vpoint = vpoint + 1;
	}
	keygen[1] = ((char *)alph)[(point ^ 79) & 63];
	point = 1;
	vpoint = 0;
	while (vpoint < len)
	{
		point = argv[1][vpoint] * point;
		vpoint = vpoint + 1;
	}
	keygen[2] = ((char *)alph)[(point ^ 85) & 63];
	keygen[3] = ((char *)alph)[biggest(argv[1], len)];
	keygen[4] = ((char *)alph)[multi(argv[1], len)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (point = 0; keygen[point]; point++)
		printf("%c", keygen[point]);
	return (0);
}
