#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)  /* Check for invalid input */
	return;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");  /* Print comma and space for all elements */
	}
	}

	printf("\n");  /* Print new line after printing the array */
}
