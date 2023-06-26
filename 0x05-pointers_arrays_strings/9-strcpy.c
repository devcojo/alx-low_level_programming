  #include "main.h"
  #include <stdio.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination of the string
 * @src: source of the string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
