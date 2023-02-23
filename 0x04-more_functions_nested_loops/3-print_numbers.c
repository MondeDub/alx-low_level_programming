#include "main.h"

/**
 * _print_numbers -Function that prints the numbers from 0-9.
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	_putchar((x % 10); +'0')
	}
	_putchar('\n');
}
