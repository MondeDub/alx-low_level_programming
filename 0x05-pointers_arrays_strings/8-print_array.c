#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of values to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1) i++)
	{
		printf("%d, ", a[t]);
	}
	if (if == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
