#include "main.h"
/**
 * jack_bauer - I am trying to print 24hrs time with miutes and
 * seconds using 5 characrter
 * Description: lets give it a try with the  logic above
 * Return: void
 *
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
