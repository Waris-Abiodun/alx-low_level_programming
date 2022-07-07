#include <stdio.h>
#include <stdlib.h>

/**
 * main - ffibonnacii from 0 t0 50
 * Description: coprintgs the fibonnacci
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, fib;

	while (i < 50)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu", fib);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
