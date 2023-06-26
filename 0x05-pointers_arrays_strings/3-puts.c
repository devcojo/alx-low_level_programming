#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			putchar(*str);
			str++;
		}
	}

	putchar('\n');
}
