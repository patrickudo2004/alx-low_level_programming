#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i, k;

	for (n = 0; n < 8; n++)
	{
		for (i = n + 1; i < 9; i++)
		{
			for (k = i + 1; k < 10; k++)
			{
				putchar((n % 10) + '0');
				putchar((i % 10) + '0');
				putchar((k % 10) + '0');

				if (n == 7 && i == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
