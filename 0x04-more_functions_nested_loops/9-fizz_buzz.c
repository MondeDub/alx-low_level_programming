#include <stdio.h>

/**
 * main - prints the number from 1 to 100 but multiples of 3, is printed as fizz and for the multiples of 5 prints Buzz, for multiples both 3 and 5 print FizzBuzz.
 *
 * Return: always 0;
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n & 5) == 0)
	{
	printf("fizzBuzz");
	}
	else if ((n & 3) == 0)
	{
	printf("fizz");
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("&d", n);
	}
	if (n == 100)
	{
	continue;
	}
	printf(" ")
	}
	printf("\n");
	return (0);
}
