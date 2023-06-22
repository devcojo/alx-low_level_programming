#include "main.h"

/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 */

void print_diagonal(int n)
{
	int p, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		p = i;
		while (p > 0)
		{
			_putchar(32);
			p--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
