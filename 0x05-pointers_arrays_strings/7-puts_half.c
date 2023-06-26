  #include "main.h"
  #include <stdio.h>
  #include <stddef.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a null-terminated string
 * and prints the second half of the string, followed by a new line. If the
 * number of characters is odd, it prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 */

void puts_half(char *str)
{
	int full_string = 0, half_string;

	while (str[full_string] != '\0')
	full_string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
	half_string++;

	while (half_string < full_string)
	{
	putchar(str[half_string]);
	half_string++;
	}
	putchar('\n');
}

