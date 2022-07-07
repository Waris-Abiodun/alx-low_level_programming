#include <stdio.h>
#include <stdlib.h>
/**
 * main -  main root to work
 * Description: add the sum of multiples of 3 & 5 below
 * Return: void
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3  == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
