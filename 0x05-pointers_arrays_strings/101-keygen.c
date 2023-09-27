#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int pass[64], i, total = 0, n;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pass[i] = rand() % 78;
		total+= pass[i] + '0';
		putchar(pass[i] + '0');

		if ((2772 - total) - '0' < 78)
		{
			n = 2772 - total - '0';
			total += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
