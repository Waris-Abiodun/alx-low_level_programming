#include "main.h"

/**
 * print_alphabet - print a letter from a to z
 * Descriptin: I am still learning
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char f = 'a';

	while (f <= 'z')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n');
}
