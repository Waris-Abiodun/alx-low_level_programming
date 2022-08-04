#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that sum all the parameter
 * @n : number of parameter to sum
 * Return: an int of 0 and 1 if its a null
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
