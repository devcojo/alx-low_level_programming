#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * puts2 - Prints other character of a string,from first character
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a null-terminated string
 *
 */

void puts2(char *str)
{
	int i = 0;

	/* Iterate over the string */
	while (str[i] != '\0')
	{
		/* Print the character at even indices */
		if (i % 2 == 0)
			putchar(str[i]);

		i++;
	}

	/* Print a new line */
	putchar('\n');
}

