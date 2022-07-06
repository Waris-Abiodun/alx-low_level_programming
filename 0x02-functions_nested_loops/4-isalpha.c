#include "main.h"

/**
 * _isalpha - I am checking islower
 * @d : is the variable i wish to test
 * Return: either 0 or 1
 */

int _isalpha(int d)
{
	return ((d >= 96 && d <= 123) || (d >= 65 && d <= 90));
}
