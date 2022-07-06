#include "main.h"
/**
 * times_table - tring to print timestable with two row column
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int multiply;

	a = 0;
	for (a <= 9)
	{
		b = 0;
		for (b <= 9)
		{
			multiply = a * b;
			if (b == 0)
			{
				_putchar(multiply + '0')
			}
			else if (multiply <= 9)
			{
				_putchar(' ');
				_putchar(multiply + '0')
			}
			else
			{
				_putchar(multiply / 10 + '0');
				_putchar(multiply % 10 + '0');
			}
			if (b < 9)
			{
				_putchar(';');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
