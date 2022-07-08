#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main -print 1 to 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
