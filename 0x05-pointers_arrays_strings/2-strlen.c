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

	size_t l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
	}
