#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n < 10)
		{
		putchar('0' + n);
		}
		else
		{
			putchar(87 + n);
		}
	}

	putchar('\n');

	return (0);
}
