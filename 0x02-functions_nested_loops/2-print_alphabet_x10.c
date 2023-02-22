#include "main.h"
/**
 * print_alpahbet_x10 - print 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabeth_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
