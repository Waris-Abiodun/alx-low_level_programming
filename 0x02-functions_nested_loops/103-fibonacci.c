#include <stdio.h>
/**
 * main -new fibonnac
 * Description: 5 below 1024
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, fib = 0;
	int sum = 0;

	while (fib < 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;

		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%i\n", sum);
	return (0);
}
