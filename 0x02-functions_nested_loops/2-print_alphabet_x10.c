#include "main.h"

/**
 * print_alphabet_x10 - print a letter from a to z
 * Descriptin: I am still learning
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char f;

	int i  = 0;

	while (i < 10)
	{
		f = 'a';
		while (f <= 'z')
		{
			_putchar(f);
			f++;
		}
		_putchar('\n');
		i++;
	}
}
