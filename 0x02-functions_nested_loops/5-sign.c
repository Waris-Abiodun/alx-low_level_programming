#include "main.h"

/**
 * print_sign -fun time with c programming
 * @n: omoo wahala
 * Description: a fun test on the return value
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
