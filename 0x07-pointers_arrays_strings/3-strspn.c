#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: Number of bytes in the initial segment of string @s consisting
 *         only of bytes from string @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	int found;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;
	}

	return (count);
}
