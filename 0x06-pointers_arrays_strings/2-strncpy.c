#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a pointer to the first occurrence of a character.
 * @s: string to search for the character in.
 * @c: character to search for.
 *
 * Return: pointer to the character or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
		return (s + i);
	i++;
	}

	if (c == '\0')
	return (s + i);

	return (NULL);
}
