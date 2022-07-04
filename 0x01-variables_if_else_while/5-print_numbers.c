#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main -> print all single number of base 10
 * Description: all the single number will be printed
 *
 * Return: always (0) success
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
