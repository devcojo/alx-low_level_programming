#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 * return putchar() - function to print value of n.
 *  putchar() - function to print value of n.
 * @n: The number to begin counting at.
 * times_table - times table
 * times_table - prints the multiplication table from 1 to 9
 * Return: void
 */

int _putchar(char n)
	{
	return putchar(n);
	}

void times_table(void)
{
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
}
