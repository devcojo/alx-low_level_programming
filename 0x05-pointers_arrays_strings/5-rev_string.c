  #include "main.h"
  #include <stdio.h>
  #include <stddef.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Description: This function takes a pointer to a null-terminated string
 * and reverses the string in place.
 */

void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
