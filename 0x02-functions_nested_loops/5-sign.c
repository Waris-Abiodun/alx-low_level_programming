#include "main.h"
/**
 * print_sign - another fun time with c programming 
 * Description: a fun test on the return valu
 * Return: + - 0
 */
 int print_sign(int n)
{
	int sign;

	if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);
}
