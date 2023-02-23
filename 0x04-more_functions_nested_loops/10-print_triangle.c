#include "main.h"

/**
 * print triangles -print a triangleusing # character.
 * @size: The size of the triangle.
 * Return: 0 always
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
	for (hash = 1; hash <= size; hash++)
	{
	for (index = size - hash; index > 0; index--)
	{
	_putchar(" ");
	}
	for (index = 0; index < hash; index++)
	{
	_putchar('#');
	}
	if (hash == size)
	{
	continue;
	}
	_putchar('\n')
	}
	}
	_putchar('\n');
}
