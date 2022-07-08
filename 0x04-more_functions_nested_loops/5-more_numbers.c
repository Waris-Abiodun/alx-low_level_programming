#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 1 - 14 ten times
 * Description: another time t play with c
 * Return: 0 alwas
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');

			n++;
		}
		_putchar ('\n');
	}
}
