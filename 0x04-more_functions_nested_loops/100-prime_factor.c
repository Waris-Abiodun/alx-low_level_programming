#include "main.h"

/**
 * main - orints primes number to
 * Description: i am using the multiple of numbers
 * Return: a0 always succes
 */

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);

	return (0);
}

