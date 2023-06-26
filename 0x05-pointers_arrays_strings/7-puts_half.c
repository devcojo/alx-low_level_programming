  #include "main.h"
  #include <stdio.h>
  #include <stddef.h>

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a null-terminated string
 * and prints the second half of the string, followed by a new line.
 * If the number of characters is odd, it prints the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2.
 */

void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the start index for printing */
	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1) / 2;

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
		putchar(str[i]);

	/* Print a new line */
	putchar('\n');
}

