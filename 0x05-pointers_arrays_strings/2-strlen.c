#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen(char *s)- a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */

int _strlen(char *s)
{
	int n = 1, t = 0;
	char l = s[0];

	while (l != '\0')
	{
		t++;
		l = s[n++];
	}
	return (t);
}
