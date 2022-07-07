#include "main.h"
/**
 * print_times_table - prints timetable only if < 15
 * @n: use to input up to the timetable you want
 * Description: i think i am getting into C
 * Return: void and result
 */
void print_times_table(int n)
{
	int row = 0, column, result;

	if (n < 0 || n > 15)
		return;

	while (row <= n)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
				_putchar(result + '0');
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 100 + '0');
				_putchar((result - 100) / 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}
