#include "main.h"
/**
 * print_last_digit - i am trying to print last digit using modulo
 * @i: the integer i am using
 * Description; i am learnibg
 * Return: 0
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i > 0)
	{
		last_digit = i % 10;
	}
	else
	{
		last_digit = (i % 10) * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
