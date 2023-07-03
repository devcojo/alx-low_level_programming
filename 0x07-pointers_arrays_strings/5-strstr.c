#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the beginning of the located substrin string @haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}
