#include <stdio.h>

int is_pal(int n);

/**
 * main - main
 * Return: 0 Success 1 if it Fails
 */
int main(void)
{
	int i, j, num, big = 0;
	FILE *file;

	for (i = 999; i >= 100; i--)
	{
		for (j = 999; j >= 100; j--)
		{
			num = i * j;
			if (is_pal(num))
				if (num > big)
					big = num;
		}
	}

	file = fopen("102-result", "w");
	if (file == NULL)
	{
		printf("Error creating the file\n");
		return (1);
	}

	fprintf(file, "%d", big);
	fclose(file);

	return (0);
}

/**
 * reverse - Reverse number
 * @n: Number
 * Return: reversed number
 */
int is_pal(int n)
{
	int num = n, rev = 0;

	while (num)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return (rev == n);
}
